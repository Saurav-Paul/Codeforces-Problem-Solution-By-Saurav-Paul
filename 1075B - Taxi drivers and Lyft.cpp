#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
template<class T >T set_bit(T N,T pos){return N=N | (1<<pos);}
template<class T >T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<class T > bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template <class T > void max_self(T &a, T b){
	a=max(a,b);
}
template <class T > void min_self(T &a, T b){
	a=min(a,b);
}
////////////////////////

const int INF = 1e9 + 99;
typedef pair<ll,ll> Pair;
typedef vector<int> vec;;

void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	int n, m;
	scanf("%d%d",&n,&m);
	
	vec riders,taxidrivers;
	ara_read(riders,n+m);
	ara_read(taxidrivers,n+m);
	vector < int> dist(n+m,INF);
	vector < int> prev(n+m,-1);
	int temp =INF,last=-1 ;
	
	//backward...
	for(int i=n+m-1; i>=0; i--){
		if(i!=(n+m-1))
			temp+=abs(riders[i]-riders[i+1]);
		if(taxidrivers[i]){
			temp = 0;
			last = i;
			dist[i] = 0;
		}else{
			if(temp <= dist[i]){
				
				dist[i]=temp;
				prev[i]=last;
				
			}
			
		}
		
	}
	
	
	//frontward...
	temp = INF , last = -1;
	for(int i=0; i< n+m ; i++){
		if(i!=0)
			temp+=abs(riders[i-1]-riders[i]);
		if(taxidrivers[i]){
			temp =0;
			last=i;
			dist[i] = 0;
		}
		else{
			if(temp <= dist[i]){
				
				dist[i]=temp;
				prev[i]=last;
				//~ cerr << i << " "<<dist[i] <<" "<< prev[i] << endl;
			}
		}
	}
	
	
	vector < int > ans(n+m);
	
	for(auto x : prev){
		if(x!=-1){
			ans[x]++;
		}
	}
	
	//printing the solutoin...
	
	for(int i=0; i<n+m ; i++){
		if(taxidrivers[i]){
			printf("%d ",ans[i]);
		}
	}
	puts("");
	//~ ara_print(dist);
	//~ ara_print(prev);
	
    return 0;
}
