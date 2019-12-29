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
 
void solve () {
	
	int n ; cin >> n ;
	vector<int> v(n) ;
	vector<int> extra , house;
	bool ara[n+1] = {} ;
	for(int i = 0 ; i < n; i++){
		cin >> v[i] ;
		ara[v[i]] = true ;
	}
	for(int i = 1; i <= n ; i++){
		if(ara[i] == false) 
			extra.push_back(i);
	}
	sort(extra.begin() , extra.end() , greater<int>() ) ;
	for(int i = 0 , point = 0 ; i < n ; i ++){
		if(v[i] == 0 ){
			v[i] = extra[point++] ;
			house.push_back(i) ;
		}
	}
	for(int i = 0 ; i < n; i++){
		if(v[i]-1 == i ){
			for(auto x : house){
				if(v[x] != i+1 && v[i] != x + 1){
					swap(v[x], v[i] ) ;
					break ;
				}
			}
		}
	}
	for(auto x : v) cout << x << " ";
	cout << endl ;
}
 
int main()
{
	boost ;
	solve () ;
 
    return 0;
}
