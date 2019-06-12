				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
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
////////////////////////

template<typename T>T set_bit(T N,T pos){return N=N | (1<<pos);}
template<typename T>T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<typename T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template<typename T> void max_self(T &a, T b){
	a=max(a,b);
}
template <typename T > void min_self(T &a, T b){
	a=min(a,b);
}
template <typename T > void add_self(T &a, T b){
	a+=b;
}
////////////////////////

template<typename T> void ara_read(T &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
template<typename T> void ara_print(T &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////
const int INF = 1e9 + 99;
typedef pair<int,int> Pair;
typedef vector<Pair> vec;;


int main()
{
	int n;
	scanf("%d",&n);
	int a, b;
	vec v,mini1,mini2;
	
	for(int i=0; i< n/2; i++){
		scanf("%d%d",&a,&b);
		if(b<a)
			swap(a,b);
		v.emplace_back(a,b);
	}
	sort(all(v));
	int lastIN=-1,lastIN2=-1;
	for(int i=0; i< n/2; i++){
		a = v[i].first, b= v[i].second;
		if(lastIN==-1){
			mini1.eb(a,b);
			lastIN++;
		}
		else if(lastIN2==-1){
			mini2.eb(a,b);
			lastIN2++;
		}
		else if(a >= mini1[lastIN].second){
			mini1.eb(a,b);
			lastIN++;
		}
		else if(a >= mini2[lastIN2].second){
			mini2.eb(a,b);
			lastIN2++;
		}else{
			puts("-1");
			return 0;
		}
		
	}
	debug() << dbg(mini1) dbg(mini2);
	if(lastIN2==-1 && lastIN!=-1){ 
		for(auto x : mini1){
			printf("%d %d ",x.first,x.second);
		}
		puts("");
		return 0;
	}
	
	if(lastIN==-1 && lastIN2!=-1){ 
		for(auto x : mini2){
			printf("%d %d ",x.first,x.second);
		}
		puts("");
		return 0;
	}
	
	if(mini1[lastIN].second <= mini2[lastIN2].second ){
		cerr << " here1 " << endl;
		for(int i=0; i<= lastIN ; i++)
			printf("%d %d ",mini1[i].first,mini1[i].second);
			
		for(int i=lastIN2; i >= 0 ; i--)
			printf("%d %d ",mini2[i].second,mini2[i].first);
		puts("");
	}
	else if(mini2[lastIN2].second <= mini1[lastIN].second){
		cerr << " here2 " << endl;
		for(int i=0; i<= lastIN2 ; i++)
			printf("%d %d ",mini2[i].first,mini2[i].second);
			
		for(int i=lastIN; i >= 0 ; i--)
			printf("%d %d ",mini1[i].second,mini1[i].first);
		puts("");
	}
	else{
		puts("-1");
	}
    return 0;
}
