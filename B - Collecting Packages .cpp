
/**
 *    author:  Saurav_Paul 
 *    created: 22.01.2020 20:43:18       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);
#pragma GCC optimize("O3")
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
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
		cerr << "\nTime elapsed: " << (double)(1.0 * (double)clock() / CLOCKS_PER_SEC) << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 90;
const ll LINF = 1e18 + 90 ;
using pii = pair<int,int >;
using vec = vector<int> ;
void solve() {
	int n;
	vector<vector<int>> x(1100,vector<int>()), y(1100,vector<int>());
	cin >> n;
	for (int i = 0; i < n; i++){
		int u, v;
		cin >> u >> v;
		x[u].emplace_back(v) ;
		y[u].emplace_back(v) ;
	}
	for (int i = 0; i < 1100; i++){
		sort(all(x[i]));
		sort(all(y[i]));
	}
		string ans = "";
	int cnt = 0;
	int cx = 0, cy = 0;
	for (int i = 0; i < 1100; i++)
	{
		if(cnt == n)
			break;
		if (y[i].size() == 0)
		{
			bug() dbg(i);
			ans += 'R';
			cx++;
			continue;
		}
		else{
			bug() dbg(i) dbg(y[i]) ;
			for(auto py : y[i]){
				if(py < cy){
					goto nxt;
				}
				else{
					cnt++;
					while (cy < py)
					{
						cy++;
						ans += 'U';
					}
				}
			}
			if(cnt < n)
			ans += 'R';
		}
	}
	nxt : 
	if(cnt == n){
		cout << "YES" << endl;
		cout << ans << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int testcase;
	cin >> testcase;
	for (int t = 1; t <= testcase; t++)
	{
		solve();
	}

    return 0;
}
