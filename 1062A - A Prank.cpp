#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
template<class T >T set_bit(T N,T pos){return N=N | (1<<pos);}
template<class T >T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<class T > bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template <class T > void max_self(T &a, T b){
	a=max(a,b);
}
template <class T > void min_self(T &a, T b){
	a=min(a,b);
}
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
void ara_print(vec &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////

int main()
{
	int n;
	scanf("%d",&n);
	vec num;
	ara_read(num,n);
	//~ int cnt =0 , st = 0 , sp =0;
	int cnt=0;
	for(int i=1; i< n; ++i){
		if(num[i]-num[i-1]==1){
			int k=i+1 ;
			int temp = 2;
			while(k<n){
				if(num[k]-num[k-1]!=1)
					break ;
				k++;
				temp++;
			}
			int tmpst=num[i-1];
			int tmpsp=num[k-1];
			if(tmpst!=1)
				temp--;
			if(tmpsp!=1000)
				temp--;
			if(temp > cnt){
				
				//~ st = num[i-1] ;
				//~ sp = num[k-1] ;
				cnt = temp;
			}
			i=k-1;
		}
	}
	
	printf("%d\n",cnt);
    return 0;
}
