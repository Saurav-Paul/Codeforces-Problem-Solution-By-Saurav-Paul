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
using Pair = pair<int,int >;
using vec = vector<int> ;

void vecread(vec &v){
	for(auto &x : v){
		scanf("%d",&x);
	}
}
void vecprint(vec &v){
	for(auto x : v){
		printf("%d ",x);
	} puts("");
}

void find_diff(vec &diff,vec &v){
	int n = v.size();
	int prev = 0;
	for(int i = 0 ; i < n; i++){
		diff.eb(v[i]-prev);
		prev = v[i];
	}
}

void solve(vec &diff){
	int n = diff.size();
	vec ans;
	
	for(int i = 0 ; i < n ; i++){
		bool ok = true;
		for(int j = i + 1; j < n and ok; j++){
			int temp = j- (i+1);
			if(diff[temp%(i+1)]!=diff[j]){
				ok = false;
			}
		}
		if(ok){
			ans.eb(i+1);
		}
	}
	printf("%d\n",(int)ans.size());
	vecprint(ans);
}

int main()
{
	int n;
	scanf("%d",&n);
	vec v(n);
	vecread(v);
	
	vec diff;
	find_diff(diff,v);
	/**
	 * 1 2 2 1 2
	 * 1 x
	 * 1 2 x
	 * 1 2 2 r
	 * 1 2 2 1 x
	 * 1 2 2 1 2 r
	 * **/
	
	solve(diff);

	time();
    return 0;
}
