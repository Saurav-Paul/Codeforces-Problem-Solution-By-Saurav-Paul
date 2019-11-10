				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

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

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
int main() ;
void file(){
	#ifdef PAUL
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
}
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;

int main()
{
	int n , m , d;
	scanf("%d%d%d",&n,&m,&d) ;
	
	vector<int> platform_size(m) ;
	int need = 0;
	for(auto &x : platform_size){
		scanf("%d",&x) ;
		need += x ;
	}
	need = n - need ;
	vector<int> ans(n) ;
	
	int pos = 0;

	for(int i = 0 ; i < n; ){
		
		if(need){
			int lagbe = min(need,d-1) ;
			need -= lagbe ;
			
			i += lagbe ;
		}
		int platform = platform_size[pos++] ;
		
		for(int j = i ; j < i + platform ; j ++ ){
			
			ans[j] = pos ;
		}
		i += platform ;
		
		if( pos == m) break ;
	}
	
	if(need >= d) {
		puts("NO") ;
	}
	else{
		puts("YES") ;
		for(auto x : ans) printf("%d ",x) ;
		puts("") ;
	}
	
    return 0;
}
