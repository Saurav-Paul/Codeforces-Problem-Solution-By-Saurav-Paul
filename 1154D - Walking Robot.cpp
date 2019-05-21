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
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<bool> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////

int main()
{
	ll n, b, a;
	scanf("%lld%lld%lld",&n,&b,&a);
	ll ca=a;
	vector < bool > segments;
    ara_read(segments,n);
    
	ll can_pass=0;
	for (auto x : segments){
		if(x){
			if(a==ca){
				--a ;
				can_pass++;
			}
			else if(b){
				--b;
				can_pass++;
				++a;
				a=min(ca, a);
			}else if(a){
				--a ;
				can_pass++;
			}else{
				break ;
			}
		}else{
			
			if(a){
				--a;
				can_pass++;
			}else if(b){
				--b;
				can_pass++;
			}
			else{
				break ;
			}
		}
		
	}
    printf("%lld\n",can_pass);
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
