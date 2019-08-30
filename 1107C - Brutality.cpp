				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

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
const int INF = 1e9 + 99;
using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;
const int nax = 2e5 + 30;
char s[nax] ;

int main()
{
	int hit, k;
	scanf("%d%d",&hit,&k);
	
	vector<int> v(hit);
	
	for(auto &x : v)
		scanf("%d",&x);
	
	scanf("%s",s);
	
	ll ans = 0;
	
	priority_queue<int> pq;
	
	pq.push(v[0]);
	
	for(int i = 1 ; i < hit ; i++){
		if(s[i]==s[i-1]){
			pq.push(v[i]);
		}
		else{
			int temp = k;
			while(temp and !pq.empty()){
				ans += pq.top();
				pq.pop();
				temp --;
			}
			pq = priority_queue<int> ();
			
			pq.push(v[i]);
		}
	}

	int temp = k;
	while(temp and !pq.empty()){
		ans += pq.top();
		pq.pop();
		temp --;
	}
	
	printf("%lld\n",ans);
	
	time();
    return 0;
}
