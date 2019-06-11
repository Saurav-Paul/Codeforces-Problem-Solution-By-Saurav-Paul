				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
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
using namespace std;
///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
////////////////////////

template<typename T>T set_bit(T N,T pos){return N=N | (1<<pos);}
template<typename T>T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<typename T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template<typename T> void max_self(T &a, T b){
	a=max(a,b);
}
template <typename T > void min_self(T &a, T b){
	a=min(a,b);
}
template <typename T > void add_self(T &a, T b){
	a+=b;
}
////////////////////////

template<typename T> void ara_read(T &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
template<typename T> void ara_print(T &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
const int nax = 500+5;
char grid[nax][nax];

int main()
{
	int n, m;
	scanf("%d%d",&n,&m);
	char c;
	for(int i=0; i< n; i++){
		for(int j=0 ; j< m; j++){
			cin >> c;
			grid[i][j] = c;
		}
	}
	int star = 0,plus=0,x,y;
	
	
	for(int i=0; i< n; i++){
		for(int j=0 ; j< m; j++){
			
			cout<<grid[i][j];
		}
		puts("");
		
	} cout << endl;
	for(int i=0; i< n;i++){
		for(int j=0 ; j< m ; j++){
			if(grid[i][j]=='*'){
				star++;
				if(i > 0 && i < n-1 && j > 0 && j < m-1){
					
					if(grid[i-1][j]=='*' && grid[i+1][j]=='*' &&
						grid[i][j-1]=='*' && grid[i][j+1]=='*'){
							
							plus++;
							 x = i;
							 y = j;
							 
							if(plus > 1){
								puts("NO");
								return 0;
							}
						}
				}
			}
		}
	
	}
	
	if(plus==1){
		
		int cnt = 0;
		int i = x-1 , j = y;
		while(i>=0){
			if(grid[i][j]=='*')
				cnt ++;
			else
				break ;
			i--;
		}
		i = x+1, j=y;
		while(i <n){
			if(grid[i][j]=='*')
				cnt ++;
			else
				break ;
			i++;
		}
		i = x , j= y-1;
		while(j >= 0 ){
			if(grid[i][j]=='*')
				cnt ++;
			else
				break ;
			j--;
		}
		i = x , j= y+1;
		while(j < m ){
			if(grid[i][j]=='*')
				cnt ++;
			else
				break ;
			j++;
		}
		
		if(cnt+1 == star)
			puts("YES");
		else
			puts("NO");
	}
	else{
		puts("NO");
	}
	
	
	
    return 0;
}
