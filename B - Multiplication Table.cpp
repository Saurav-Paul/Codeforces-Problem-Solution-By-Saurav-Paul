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
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
		main();
	#endif
}
///////////////////////
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;

int main()
{
	
	int n; scanf("%d",&n);
	ll grid[n+1][n+1];
	
	for(int i = 1; i <= n; i++){
		for(int j = 1 ; j <= n; j++){
			scanf("%lld",&grid[i][j]);
		}
	}
	
	vector<ll> ans(n+1);
	for(int i = 1 ; i <= n ; i++){
		if(i==1){
			ll temp = grid[i][2] * grid[i][3];
			temp = temp/grid[2][3];
			ans[i] = sqrt(temp);
		}
		else if(i==2){
			ll temp = grid[i][1] * grid[i][3];
			temp = temp / grid[1][3];
			ans[i] = sqrt(temp);
		}
		else{
			ll temp = grid[i][1] * grid[i][2];
			temp = temp / grid[1][2];
			ans[i] = sqrt(temp);
		}
	}
	
	for(int i = 1 ; i <= n ; i++)
		printf("%lld ",ans[i]);
	puts("");
	
	//~ time();
    return 0;
}
