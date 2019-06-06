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
const ll INF = pow(2,32)-1;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;


int main()
{
	
	boost;
	ll t,total=0,p;
    stack<ll> stk;
    cin>>t;
    stk.push(1);
    bool flag = false;
    for(int i=0; i< t ; i++)
    {
        string s;
    
        cin>>s;
        if(s=="for"){
			ll temp;
			cin >> temp;
			ll num = stk.top();
			if(num==-1)
				stk.push(-1);
			else if(num * temp > INF)
				stk.push(-1);
			else
				stk.push(num*temp);
		}
		if(!flag){
			if(s=="add"){
				p = stk.top();
				if(p!=-1){
					total += p;
					if(total > INF)
						flag = true;
				}
				else
					flag = true;
			}
			else if(s=="end")
				stk.pop();
		}
    }
	
    if(flag)
		cout<<"OVERFLOW!!!"<<endl;
	else
		cout<<total<<endl;
    return 0;
}
