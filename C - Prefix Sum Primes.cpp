#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define dbg(x)                cout <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
void FAST_IO();
////////////////////////

vector<int>primelist;
int mark[1000002];
void sieve(int n);

int main()
{
    ll n;
    sieve(400000);
    scn(n);
    vector<ll> in;
    ll two=0,one=0;
    for(int i=0; i<n; i++){
		ll temp; scn(temp);
		if(temp==2)
			two++;
		else
			one++;
		//in.emplace_back(temp);
	}
    ll now=0;
    ll curr=0;
    for(int i=0,sz=two+one; i<sz ; i++){
		if(two && one){
			ll diff=primelist[now]-curr;
			if(diff>=2){
				printf("2 ");
				curr+=2;
				two--;
			}
			else{
				printf("1 ");
				curr+=1;
				one--;
			}
		}else if(one){
			printf("1 ");
			curr+=1;
			one--;
		}else{
			printf("2 ");
			curr+=2;
			two--;
		}
		if(curr==primelist[now])
			now++;
		
	}
	
    return 0;

}










void sieve(int n)
{
    int i,j,limit=(ll)sqrt(n*1.)+2;
    primelist.push_back(2);
    //take 1 for not prime and 0 for prime
    mark[1]=1;
    //almost all even are,not prime
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    //2 is prime
    mark[1]=2;
    //run loop for only odds
    for(i=3; i<=n; i+=2)
        //if not prime, no need to do multiple cutting
        if(!mark[i])
        {
            //i is prime
            primelist.push_back(i);

            //if we don,t do it, following
            //i*i may overflow
            if(i<=limit)
            {
                //loop though all odd multiples of i
                //greater than i*i
                for(j=i*i; j<=n; j+=i*2)
                {
                    //mark j not prime
                    mark[j]=1;
                }
            }
        }


}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
