#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()


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

////////////////////////

const int INF = 1e9 + 99;
typedef pair<int,int> Pair;
typedef vector<int> vec;;


int main()
{
	boost;
	vector<string> v;
	int n, m;
	cin >> n >>m;
	int lamp[m]  ={};
	for(int i= 0 ; i < n ; i++){
		string s;
		cin >> s;
		v.eb(s);
		for(int k = 0 ; k < m ; k++){\
			if(s[k]=='1')
				lamp[k] += 1;
		}
	}
	bool ok = false;
	
	
	for(int i = 0 ; i < n; i++){
		
		for(int k = 0 ; k < m ; k++){
			if(v[i][k]=='1')
				lamp[k] -= 1;
		}
		
		ok = true;
		
		for(int j = 0 ; j < m ; j++){
			if(lamp[j] == 0){
				ok = false;
				break ;
			}
		}
		
		if(ok)
			break ;
		
		for(int k = 0 ; k < m ; k++){
			if(v[i][k]=='1')
				lamp[k] += 1;
		}
		
	}

	cout << (ok?"YES":"NO") << "\n";
	
    return 0;
}
