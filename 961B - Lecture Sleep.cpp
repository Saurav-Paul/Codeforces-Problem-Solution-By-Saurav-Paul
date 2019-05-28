#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);
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
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
template<class T >T set_bit(T N,T pos){return N=N | (1<<pos);}
template<class T >T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<class T > bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<class T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template <class T > void max_self(T &a, T b){ a=max(a,b); }
template <class T > void min_self(T &a, T b){ a=min(a,b); }
template <class T > void add_self(T &a, T b){ a+=b; }
////////////////////////

const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<int> vec;;

void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
template<typename T >void ara_print(T &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	int n, k; scanf("%d%d",&n,&k);
	vector < int > lectures;
	ara_read(lectures,n);
	vector < int > rem;
	ara_read(rem,n);
	vector <ll > dp(n+1);
	
	
	ll total=0;
	for(int i=0; i< n ; i++){
		if(!rem[i])
			dp[i+1] = dp[i]+lectures[i];
		else{
				total+=lectures[i] ;
				dp[i+1]=dp[i];
			}
	}
	
	
	ll maximum =0;
	for(int i=0; i< n-k+1 ; i++){
		
			ll temp= dp[i+k]-dp[i] ;
			max_self(maximum,temp);
	}
	//~ ara_print(dp);
	printf("%lld\n",total+maximum);
	
    return 0;
}
