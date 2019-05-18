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
void ara_read(vec &v,ll n);
////////////////////////

int main()
{
	ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll t,p;
	ll i=5;
	if(n<25){
		puts("-1");
		return 0;
	}
	ll sq=(ll)sqrt(n);
	while(i<=sq){
		if(n%i==0){
			t=n/i;
			p=i;
			if(t<5){
				puts("-1");
				return 0;
			}
			break ;
		}
		if(i==sq){
			puts("-1");
			return 0;
		}
		i++;
	}
	//~ cout<<t<<endl<<p<<endl;
	char ara[t][p];
	char sample[]={'a','e','i','o','u'};
	i=0;
	//first row
	for(int h=0; h<t ; h++){
		ara[0][h]=sample[i];
		i++;
		if(i==5)
			i=0;
		
	}
	//~ cout<<endl;
	for(int h=0; h<p ; h++){
		char tmp=(char)ara[0][h];
		ll ktm=0;
		while(ktm<5){
				
				if(tmp==sample[ktm]){
					i=ktm;
					break ;
				}
				
				ktm++;
				
		}
		//~ cout<<tmp<<" "<<sample[ktm]<<endl;
		for(int cs=1;cs<t ; cs++ ){

			i++;
			if(i==5){
				i=0;
			}
			ara[cs][h]=sample[i];
			
		}
	}
	for(int row=0; row<t ; row++ ){
		for(int col=0 ; col<p ; col++){
			 cout<<ara[row][col];
		}
		
		
	}
	cout<<"\n";
   return 0;
}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}
