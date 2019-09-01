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
using ll = long long int ;
const ll INF = 1e18 + 99;
using pii = pair<int,int >;
using vec = vector<int> ;

void bruteforce(vec &v , int n , int k){
	ll cnt = -1;
	
	for(int i = 0 ; i <= 2e5+2 ; i++){
		int equal = 0;
		ll op = 0;
		for(int j= 0; j < n and equal < k; j ++){
			if(v[j]==i)
				equal ++;
			else if(v[j] < i)
				continue ;
			else{
				int temp = 0;
				int t = v[j];
				
				while(t > i)
					temp ++ , t/=2;
				
				if(t == i)
					op += temp , equal ++;
			}
		}
		if(equal == k){
			if(cnt == -1)
				cnt = op;
			else
				cnt = min(op,cnt);
		}
	}
	printf("%lld\n",cnt);
}

int main()
{
	int n , k;
	scanf("%d%d",&n,&k);
	
	vector<int> v(n);
	for(int &x: v)
		scanf("%d",&x);
	
	sort(all(v));
	
	debug() << dbg(v);
	
	bruteforce(v,n,k);
	
	time();
    return 0;
}
