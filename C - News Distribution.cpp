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
	ll node, edge;
	scanf("%lld%lld",&node, &edge);
	vector<ll > graph[node+1];
	vector<ll> rem(node+1,-1);
	vector<ll> value(node+1,0);
	for(int i=0; i< edge ; i++){
		ll no; scn(no);
		ll m;
		if(no)
		 scn(m);
		no--;
		ll temp;
		for(int j=0;j< no ; j++){
			scn(temp);
			graph[temp].emplace_back(m);
			graph[m].emplace_back(temp);

		}
		
	}
	//~ for(int i=1; i<=node ; i++){
		//~ dbg(i);
		//~ for(int j=0;j<graph[i].size() ; j++){
			//~ cout<<graph[i][j]<<" ";
		//~ }
		//~ cout<<endl;
	//~ }
	for(ll i=1; i<= node ; i++){
		if(rem[i]!=-1){
			printf("%lld ",value[rem[i]]);
		}else{
			
			//bfs start
			ll nde=i;
			queue<ll> q;
			
			q.push(nde);
			ll cnt=1;
			rem[nde]=nde;
			//~ cout<<"node -> "<<nde<<" : ";
			while(!q.empty()){
				ll f=q.front();
				
				q.pop();
				ll sz=graph[f].size();
				for(int visit=0; visit<sz ; visit++){
					ll tmp=graph[f][visit];
					if(rem[tmp]==-1){
						rem[tmp]=nde;
						cnt++;
						//~ cout<<tmp<<" ";
						q.push(tmp);
					}
					
				}
				
			}
			
			value[i]=cnt;
			
			
			//bfs end
			
			printf("%lld ",value[i]);
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
void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}

