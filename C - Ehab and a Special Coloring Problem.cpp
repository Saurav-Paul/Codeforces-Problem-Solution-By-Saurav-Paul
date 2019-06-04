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
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
const int nax = 1e5 + 90;
bool mark[nax];
int xx=1;
int ans[nax];
void sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;
   
    
    mark[1]=1;
    //almost all even are,not prime
    for(i=2; i<=n; i+=2)
    {
        mark[i]=1;
        ans[i]=xx;
    }
    xx++;
    //2 is prime
    mark[1]=2;
    //run loop for only odds
    for(i=3; i<=n; i+=2)
        //if not prime, no need to do multiple cutting
        if(!mark[i])
        {
			 ans[i]=xx;;
            //i is prime
			//~ mark[i]=xx;
            //if we don,t do it, following
            //i*i may overflow
            if(i<=limit)
            {
                //loop though all odd multiples of i
                //greater than i*i
                for(j=i; j<=n; j+=i)
                {
                    //mark j not prime
                    mark[j]=1;
                    ans[j]=xx;
                }
            }
            xx++;
        }


}

int main()
{
	
	ll n;
	cin>>n;
	sieve(n+10);
	
	
	for(int i=2 ; i<= n; i++){
		printf("%d ",ans[i]);
	}

	puts("");
	
    return 0;
}
