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

void solve(){
	int n ; scanf("%d",&n);
	
	vec v(n);
	vecread(v);
	
	string ans = "";
	int prev = 0;
	for(int l = 0 , r = n-1; l <= r ;){

		if(prev >= v[l] and prev >= v[r])
			break ;
		if(v[l]<v[r] and prev<v[l]){
			ans +='L';
			prev=v[l];
			l ++ ;
		}
		else if(v[r] < v[l] and prev<v[r]){
			ans += 'R';
			prev=v[r];
			r --;
		}
		else if(v[l]==v[r]){
			int a = 0 , b= 0;
			
			for(int i = l+1 ; i <= r ; i++){
				if(v[i]>v[i-1])
					a ++;
				else
					break ;
			}
			
			for(int i = r-1 ; i >= l ; i--){
				if(v[i]>v[i+1])
					b ++;
				else
					break ;
			}
			if(a>b){
				ans +='L';
				prev = v[l];
				l ++;
			}
			else{
				ans +='R';
				prev = v[r];
				r--;
			}

		}
		else if(v[l]>prev){
			ans +='L';
			prev = v[l];
			l ++;
		}
		else if(v[r]>prev){
			ans +='R';
			prev = v[r];
			r--;
		}
		else
			assert(false);
	}
	
	cout<< ans.size()<<endl;
	cout<< ans<<endl;

	time();
}
int main(){

	solve();
	
	return 0;
}
