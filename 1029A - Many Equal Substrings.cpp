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
bool find_repeating(string s,int sz, string &sample){
	
	bool done= false ;
	string test = s ;
	for(int i=1; i<sz ; i++){
		int k=0;
		int j=i;
		while(j<sz){
			
			if(test[k]!=s[j])
				break ;
			if(j==sz-1){
				done=true ;
				for(i=k+1; i<sz ; i++){
					sample+=test[i];
				}
				break ;
			}
			j++;
			k++;
		}
	}
	
	return done ;
}

int main()
{
	boost ;
	int n, k;
	cin>>n>>k;
	string s; cin>>s ;
	string repeating="";
	
	bool flag = find_repeating(s,n,repeating);
	
	if(!flag)
		repeating = s;
	
	cout <<s ; k--;
	while(k--)
		cout<<repeating;
	cout<<"\n";
	
    return 0;
}
