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
 
void solve(){
	map<string,int> mp ;
	int n ; cin>> n;
	vector<string> v(n) ;
	for(string &s : v){
		cin>>s;
		mp[s] ++;
	}
	
	int cnt = 0;
	for(int k = 0 ; k < n ;k++){
		string s = v[k] ;
		if(mp[s] <= 1)
			continue ;
		string temp = s;
		bool ok = false;
		for(int i = 0; i < 4 and ok == false ; i++){
			for(int j = 0 ; j < 10 ; j++){
				char c = j+ '0' ;
				temp[i] = c;
				if(mp[temp] == 0){
					ok = true ;
					break ;
				}
			}
			if(ok==false)
			temp = s;
		}
		v[k] = temp ;
		mp[temp] ++;
		mp[s]--;
		cnt ++;
	}
	
	cout << cnt << endl;
	for(auto s : v){
		cout << s<< endl ;
	}
}
 
int main()
{
	boost ;
	int test; 
	cin >> test ;
	
	while(test--){
		solve() ;
	}
	
 
 
    return 0;
}
