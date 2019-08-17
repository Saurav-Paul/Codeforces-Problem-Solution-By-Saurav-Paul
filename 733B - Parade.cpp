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
	int n;
	scanf("%d",&n);

	
	vector<Pair> v(n),temp;
	for(int i = 0 ; i < n; i++)
		scanf("%d%d",&v[i].first,&v[i].second);
		
	temp = v;
	
	
	ll l = 0 , r = 0;
	for(int i = 0 ; i < n ; i++){
		l += v[i].first;
		r += v[i].second;
	}
	
	int index = -1;
	
	int mxbeauty = abs(l-r);
	
	for(int i = 0 ; i < n; i++){
		
		int tl = l , tr = r;
		tl += (v[i].second-v[i].first);
		tr += (v[i].first - v[i].second) ;
		if(abs(tl-tr) > mxbeauty){
			
			index = i+1;
			mxbeauty = abs(tl-tr);
		}
		
	}
	
	if(index == -1)
		puts("0");
	else
		printf("%d\n",index);
	
    return 0;
}
