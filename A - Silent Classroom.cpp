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
ll fact(ll n); 
  
ll nCr(ll n) 
{ 
    return ((n*(n-1))/2) ;
} 
  
// Returns factorial of n 

int main()
{
	ll n;
	cin>>n;
	vec alphabet(29,0);
	for(int i=0; i< n ; i++){
		string s;
		cin>>s;
		alphabet[s[0]-'a']++;
	}
	ll ans=0;
	for(auto i : alphabet){
		if(i){
			ll h1=i/2;
			ll h2=i-h1;
			ans+=(nCr(h1))+(nCr(h2));
		}
	}
	cout<<ans<<endl;
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
