#include<bits/stdc++.h>
#define nl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
vector<int>primelist;
int mark[1000002];
bool isPrime[1000002];
void sieve(int n);

int main()
{
 //    _time_
    //FAST_IO();
    ll n ,k;
    cin>>n>>k;
    sieve(n+10);
    ll cnt=0;
    for(int i=0;i<primelist.size();i++){
        ll temp=primelist[i]+primelist[i+1]+1;
        if(temp>n)
            break;
        if(isPrime[temp])
            cnt++;

    }
    if(cnt<k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

//   _show_
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;
    primelist.push_back(2);
    isPrime[2]=1;
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
            isPrime[i]=1;
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

