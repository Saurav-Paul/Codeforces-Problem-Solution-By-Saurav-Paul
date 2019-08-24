				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
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

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}
///////////////////////
/*
string readString(){
    string s;
    char c=getchar();
    while(isspace(c)){
        c=getchar();
    }
    while(!isspace(c)){
        s+=c;
        c=getchar();
    }
    return s;
}
*/
const ll INF = 2e18 + 99;
using Pair = pair<int,int >;
using vec = vector<ll> ;

void solve(){
	
	ll n , a , b;
	cin >> n >> a >> b;
	string s; cin >> s;
	
	vector< vec > dp(n+10,vec (2,INF));
	
	dp[0][0] = b;
	dp[0][1] = INF;
	
	for(int i = 0; i < n; i++){
		if(s[i]=='0'){
			dp[i+1][0] = min(dp[i][0] + a + b , dp[i][1] + 2*a + b);
			dp[i+1][1] = min(dp[i][0] + 2*a + 2*b , dp[i][1] + a + 2*b);
		}
		else{
			dp[i+1][0] = INF;
			dp[i+1][1] = dp[i][1]+a+2*b;
		}
	}
	
	cout << dp[n][0] << endl;
}

int main()
{
	boost ;
	int testcase;
	cin >> testcase;
	while(testcase--)
		solve();
	time();
    return 0;
}
