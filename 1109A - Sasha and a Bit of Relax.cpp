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
const int INF = 1e9 + 99;
using pll = pair<ll,ll>;
using vec = vector<ll> ;

void vecread(vec &v){
	for(auto &x : v){
		scanf("%lld",&x);
	}
}
void vecprint(vec &v){
	for(auto x : v){
		printf("%lld ",x);
	} puts("");
}

void solve(vec &v){
	
	vec cumxor;
	ll Xor = 0;
	
	cumxor.eb(0);
	cumxor.eb(0);
	for(auto x : v){
		Xor ^= x;
		cumxor.eb(Xor);
	}
	
	int n = (int)cumxor.size();
	vec dp(n+5);
	map <ll, pll > odd;
	map <ll, pll > even;
	
	for(ll i = 1 ; i < n; i++){
		ll target = cumxor[i];
		
		if(i&1  and odd[target].first){
			pll p = odd[target];
			dp[i] = dp[p.second] + 1;
			p = {1,i};
			odd[target]=p;
		}
		else if(i%2==0 and even[target].first){
			pll p = even[target];
			dp[i] = dp[p.second] + 1;
			p = {1,i};
			even[target]=p;
		}
		else{
			pll p= {1LL,i};
			if(i&1)
				odd[target] = p;
			else
				even[target] = p;
		}

	}
	
	ll ans  = 0;
	for(auto x : dp)
		ans += x;
		
	cout << ans << endl;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	vec v(n);
	vecread(v);
	
	solve(v);
	
	time();
    return 0;
}
