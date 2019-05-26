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

const ll INF = 2e18 + 99;
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
	
	vector < pair<int , int > > num;
	int a, b;
	map < int  , int > ma;
	for(int i=0; i< m ;i++){
		scanf("%d%d",&a,&b);
		num.emplace_back(a,b);
		ma[a]++;
		if(a!=b)
			ma[b]++;
	}
	bool flag = false;
	int half=m/2;
	for(auto x : ma){
		if(x.second>=half){
			int curr = x.first ;
			if(x.second==m){
				flag=true;
				break ;
			}
			map < int , int > temp ;
			for(auto f : num){
				if( (f.first!=curr) && (f.second!=curr)){
					
					temp[f.first]++;
					temp[f.second]++;
					
				}
			}
			
			for(auto f : temp){
				int k = f.second + x.second ;
				if(k>=m){
					flag =true ;
					break ;
				}
				
			}
			
		}
	}
	
	puts(flag?"YES" : "NO");
	
    return 0;
}
