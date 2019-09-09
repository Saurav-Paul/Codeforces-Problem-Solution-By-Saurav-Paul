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

void idea(vec &v){
	int minlen = INF;
	int index = -1;
	int n = v.size();
	for(int i = 0 ;i  < n ; i++){
		int gcd = v[i];
		for(int j = i ; j< n ; j++){
			gcd = __gcd(gcd,v[j]);
			if(gcd == 1){
				if(j-i < minlen){
					index = i;
					minlen = j-i;
				}
				break ;
			}
		}
	}
	if(index==-1){
		puts("-1");
		return;
	}
	int cnt = minlen;
	for(int i = index+1 ; i < n ; i++){
		if(v[i] != 1)
			cnt ++;
	}
	for(int i = index -1 ; i >= 0 ; i--){
		if(v[i] != 1)
			cnt ++;
	}
	
	printf("%d\n",cnt);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	vector<int> v(n);
	int gcd = 0;
	
	for(int i = 0 ; i< n; i++){
		scanf("%d",&v[i]);
		if(i)	gcd= __gcd(gcd,v[i]);
		else gcd = v[i];
	}
	idea(v);

	time();
    return 0;
}
