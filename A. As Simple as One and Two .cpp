
/**
 *    author:  Saurav_Paul 
 *    created: 06.01.2020 14:33:51       
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

void solve () {
	string s ; cin >> s;
	vector<int> v;
	int n = s.size() ;
	for(int i = 0 ; i < n-2 ; i ++){
		if(s[i] == 'o' && s[i+1] =='n' && s[i+2] == 'e'){
			v.emplace_back(i+2) ;
			s[i+1] = 'x' ;
		}
		else if(s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o' ){
			if(i+3 < n && s[i+3]== 'o'){
				v.emplace_back(i+2) ;
				s[i+1] = 'x' ;
			}
			else{
				v.emplace_back(i+3) ;
				s[i+2] = 'x' ;
			}
		}
		
	}

	cout << (int) v.size() << endl ;
	for(auto x : v) cout << x << " ";
	cout << endl ;
}

int main()
{	
	boost ;
	int t ; cin >> t ;
	while(t--){
		solve () ;
	}

    return 0;
}
