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

void trk(){int f=0; while(f<100)f++; if(f>0) f=0 ;}
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

////////////////////////
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
const int nax = 3* 1e5+10;

bool a[nax],b[nax];


int main()
{
	//~ boost ;
	ll n,m,ta,tb,k;
	cin>>n>>m>>ta>>tb>>k;
	vector <ll > atob , btoc;
	
	for(int i=0; i< n ; i++){
		ll temp;
		scanf("%lld",&temp);
		atob.emplace_back(temp+ta);
		
	}
	
	for(int i=0; i< m ; i++){
		ll temp;
		scanf("%lld",&temp);
		btoc.emplace_back(temp);
		
	}
	ll t = 0;
	ll answer=0;
	if(k==n || k==m){
		puts("-1");
		return 0;
	}
	for(int i=0; i< n; i++){
		
		if(t>k)
			break ;

		ll index = lower_bound(all(btoc),atob[i])-btoc.begin() + (k-t);
	
		if(index>=m){
			cout <<-1<<endl;
			return 0;
		}
		answer =max(answer,btoc[index]+tb);
		t++;
	}
	if(answer!=INF){
		printf("%lld\n",answer);
	}
	else
		puts("-1");
    return 0;
}
