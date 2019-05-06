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

int main()
{
	ll n, m;
	scanf("%lld%lld",&n,&m);
	char grid[n+1][m+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			//~ scanf("%c",&grid[i][j]);
			cin>>grid[i][j];
		}
		//~ getchar();
	}
	
	//~ for(int i=1; i<=n; i++){
		//~ for(int j=1; j<=m; j++){
			//~ printf("%c",grid[i][j]);
		//~ }
		//~ printf("\n");
	//~ }
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(grid[i][j]!='B')
				continue ;
			ll lft=0,rgt=0,up=0,down=0;
			int k=i;
			while(k>0){
				if(grid[k][j]!='B'){
					break;
				}
				up++;
				k--;
			}
			k=i;
			while(k<=n){
				if(grid[k][j]!='B'){
					break;
				}
				
				down++;
				k++;
			}
			k=j;
			while(k>0){
				if(grid[i][k]!='B')
					break;
				k--;
				lft++;
			}
			k=j;
			while(k<=m){
				if(grid[i][k]!='B')
					break;
				k++;
				rgt++;
			}
			//printf("%d %d\n%lld %lld %lld %lld\n\n",i,j,lft,rgt,up,down);
			if(lft==rgt && rgt==up && up==down){
				printf("%d %d\n",i,j);
				return 0;
			}
		}
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
