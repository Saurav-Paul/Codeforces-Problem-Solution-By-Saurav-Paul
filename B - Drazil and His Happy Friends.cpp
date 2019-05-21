#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<bool> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////

int main()
{
	
	ll boy, girl;
	scn2(boy,girl);
	vec happy_boy,happy_girl;
	ara_read(happy_boy,boy);
	ara_read(happy_girl,girl);
	
	ll limit = max(boy,girl) ;
	limit *=limit ;
	ll t1,t2;
	for (int i=0; i<= limit +10; ++i){
		t1=i%boy;
		t2=i%girl;
		
		if(happy_boy[t1] || happy_girl[t2]){
			happy_boy[t1] = true ;
			happy_girl[t2] = true ;
		}
	}
	bool flag = true ;
	for (auto x : happy_boy){
		if(!x){
			flag=false;
			break ;
		}
	}
	if(flag)
		for(auto x : happy_girl){
			if(!x){
				flag=false;
				break ;
			}
		}
		
	puts(flag? "Yes" : "No");
    return 0;
}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
void ara_read(vec &v,ll n){
	v.resize(n);
	ll temp, limit;
	scanf("%lld",&limit);
	for(ll i=0; i<limit; i++){
		scanf("%lld",&temp);
		v[temp]=1;
	}
	
}
