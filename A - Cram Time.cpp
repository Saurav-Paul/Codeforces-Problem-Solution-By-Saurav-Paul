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
void print_ara(vector<ll> ans){
	ll sz=ans.size();
	printf("%lld\n",sz);
	for(auto i : ans){
		printf("%lld ",i);
	}
	puts("");
}
int main()
{
	ll a, b; 
	scanf("%lld%lld",&a,&b);
	ll sum=a+b;
	ll k=1;
	ll used=0;
	while(used+k<=sum){
		used+=k;
		k++;
	}
	vector<ll> ans1,ans2;
	for(ll i=k-1; i>=1; i--){
		if(a>=i){
			ans1.emplace_back(i);
			a-=i;
		}else{
			ans2.emplace_back(i);
			b-=i;
		}
		
	}
	print_ara(ans1);
	print_ara(ans2);
	
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
