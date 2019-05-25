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
	int step, sum ;
	scanf("%d%d",&step,&sum);
	string maximum="",minimum="";
	if((step==1 and sum>9) or (step>1 and sum==0) or (step*9 <sum)){
		puts("-1 -1");
		return 0;
	}
	if(sum==0 and step== 1){
		puts("0 0");
		return 0;
	}
	int temp = sum;
	// finding the maximum ....
	for(int i=0; i< step ; i++){
		for(int x = 9; x>=0; x--){
			if(sum >= x){
				maximum+=itoc(x);
				sum-=x;
				break ;
			}
		}
	}
	
	//finding the minimum ....
	sum = temp ;
	for(int i=0; i < step ; i++){
		for(int x = 9 ; x >= 0 ; x--){
			if(i!=step-1){
				if(sum>=x and sum>9){
					minimum+=itoc(x);
					sum-= x;
					break ;
				}
				if(sum>=x and sum-x==1){
					minimum+=itoc(x);
					sum-=x;
					break ;
				}
				
			}else{
				assert(sum<10);
				minimum+=itoc(sum);
				break ;
			}
		}
	}
	reverse(all(minimum));
	cout << minimum  << " " << maximum<< "\n";
	
    return 0;
}
