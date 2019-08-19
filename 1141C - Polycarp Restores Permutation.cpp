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

const int INF = 1e9 + 99;
using Pair = pair<int,int >;
using vec = vector<int> ;

void vecread(vec &v){
	for(auto &x : v){
		scanf("%d",&x);
	}
}
void vecprint(vector<ll> &v){
	for(auto x : v){
		printf("%lld ",x);
	} puts("");
}

void idea(vec &v ,int n){
	
	vector<ll> newara(n);
	ll cnt = n ;
	newara[0] = cnt;
	for(int i = 0 ; i <n-1; i++){
		cnt = newara[i] + v[i];
		if(cnt < 1){
			newara[0] += (1-cnt);
			cnt = 1 ;
		}
		else if(cnt > n){
			newara[0] += (n - cnt) ;
			cnt = n;
		}
		newara[i+1] = cnt;
	}
	
	for(int i = 0 ; i < n-1 ;i++){
		newara[i+1] = newara[i] + v[i];
	}
	
	set<int> myset;
	bool ok = true;
	
	for(auto x : newara){
		if(x < 1 or x > n){
			ok = false;
			break ;
		}
		myset.insert(int(x));
	}
	ok = ((int)myset.size()==n);
	if(ok)
		vecprint(newara);
	else
		puts("-1");
}


int main()
{
	int n;
	scanf("%d",&n);
	vec v(n-1);
	vecread(v);
	
	idea(v,n);
	
	//~ debug() << dbg(v);
	time();
    return 0;
}
