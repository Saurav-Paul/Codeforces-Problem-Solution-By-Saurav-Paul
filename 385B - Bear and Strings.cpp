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

///////////////////////

void readString(string &s){
    char c=getchar();
    while(isspace(c)){
        c=getchar();
    }
    while(!isspace(c)){
        s+=c;
        c=getchar();
    }
}

const int INF = 1e9 + 99;
using Pair = pair<int,int >;
using vec = vector<int> ;
string samp = "bear";
string s;

bool check(int i ){
	int sz  = s.size();
	bool ok = false;
	for(int k = 0 ;k < 4 and k+i < sz ; k++){
		if(samp[k] != s[i+k])
			break ;
		if(k == 3)
			ok = true;
	}
	return ok;
}



int main()
{

	readString(s);
	int sz = s.size(),cnt = 0;
	ll ans = 0;
	for(int i = 0 ; i < sz; i++){
		if(check(i)){
			int x = i + 1 - cnt , y = sz-(i + 3)  ;
			ans += (x * y);
			cnt=i+1;
		}
	}
	
	cout << ans << "\n";

    return 0;
}

