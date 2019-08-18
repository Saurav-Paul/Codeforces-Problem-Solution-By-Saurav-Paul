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
/*
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
*/
const int INF = 1e9 + 99;
using Pair = pair<int,int >;
using vec = vector<int> ;

inline int cal(int n){
	int cnt = 0;
	while(n%2==0){
		n/= 2;
		cnt ++;
	}
	return pow(2,cnt) ;
}

void idea(int n , int lim){
	vector<Pair> v;
	for(int i = 1 ; i <= lim ; i++){
		v.eb(cal(i),i);
	}
	sort(v.rbegin(),v.rend());
	
	bool ok = false;
	
	vector<int> ans ;
	int sum = 0;
	for(int i = 0 ; i < (int)v.size() ; i++){
		if(v[i].first+sum <= n)
			sum += v[i].first,ans.eb(v[i].second);
		if(sum==n){
			ok = true;
			break ;
		}
	}
	
	if(ok){
		printf("%d\n",(int)ans.size());
		for(int x : ans)
			printf("%d ",x);
		puts("");
	}
	else
		puts("-1");
}



int main()
{
	int sum , limit;
	scanf("%d%d",&sum,&limit);
	idea(sum,limit);

    return 0;
}
