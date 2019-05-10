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
	ll n, m;
	scanf("%lld%lld",&n,&m);
	ll ara1[n][m],ara2[n][m];
	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			scanf("%lld",&ara1[i][j]);
		}
	}
	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			scanf("%lld",&ara2[i][j]);
		}
	}
	
	//making ara with min element 
	
	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			if(ara2[i][j]<ara1[i][j]){
				swap(ara1[i][j],ara2[i][j]);
			}
		}
	}
	
	//checking
	bool check=true;
	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			if(i==0 && j==0)
				continue ;
			if(i==0){
				if(ara1[i][j]<=ara1[i][j-1]){
					check=false;
					break;
				}
			}
			else if(j==0){
				if(ara1[i][j]<=ara1[i-1][j]){
					check=false;
					break;
				}
			}
			else if(ara1[i][j]<=ara1[i-1][j] || ara1[i][j]<=ara1[i][j-1]){
				check=false;
				break;
			}
		}
	}
	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			if(i==0 && j==0)
				continue ;
			if(i==0){
				if(ara2[i][j]<=ara2[i][j-1]){
					check=false;
					break;
				}
			}
			else if(j==0){
				if(ara2[i][j]<=ara2[i-1][j]){
					check=false;
					break;
				}
			}
			else if(ara2[i][j]<=ara2[i-1][j] || ara2[i][j]<=ara2[i][j-1]){
				check=false;
				break;
			}
		}
	}
	
	if(check){
		puts("Possible");
	}
	else{
		puts("Impossible");
	}
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
