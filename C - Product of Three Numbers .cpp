
/**
 *    author:  Saurav_Paul 
 *    created: 22.01.2020 21:18:01       
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

vector<int> primelist;
vector<long long> fact;
void sieve(int lim)
{
	bool rem[lim+70]={};
	primelist.emplace_back(2);

	for(int i =4 ; i <= lim ; i+=2)
		rem[i] = true;
	for(int i = 3 ; i <= lim ; i+= 2){
		if(rem[i]==false){
			primelist.emplace_back(i);
			for(int j = 2*i + i ; j <= lim ; j += 2*i)
				rem[j] = true;
		}
	}
}

void factorization(long long  n){
    int node = n ;

    for(auto x : primelist){
	if(x*x > n) break ;
	while(n%x == 0){
	    fact.emplace_back(x) ;
	    n /= x;
	}
    }
    if(n > 1)
	fact.emplace_back(n) ;
}

void solve() {
	long long n;
	fact.clear();
	cin >> n;
	factorization(n);
	bug() dbg(fact);
	if(fact.size() < 3){
		cout << "NO" << endl;
		return;
	}

	ll z = 1;
	for (int i = 1; i < fact.size(); i++)
	{

		z *= fact[i];

		ll k = 1;
		for (int j = i + 1; j < fact.size(); j++)
		{
			k *= fact[j];
			ll x = k * z;
			ll p = n / x;
			if( z != k && k != p && z != p){
				cout << "YES" << endl;
				cout << z << " " << k << " " << p << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n = 1e6;
	sieve(n);
	int testcase;
	cin >> testcase;
	for (int t = 1; t <= testcase; t++)
	{
		solve();
	}

    return 0;
}
