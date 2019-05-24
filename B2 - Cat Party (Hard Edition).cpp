#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(int i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
void set_bit(int &N, int pos) { N=N | (1 << pos);}
void reset_bit(int &N, int pos) { N=N & ~(1 << pos);}
bool check_bit(int N,int pos) {return (bool)( N&(1 << pos));}
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
	v.emplace_back(0);
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
const int nax = 1e5+10;
bool check_true(vec& cnt,vec& rem,int mx,int i, int color){
	bool flag=false;
	
	if(cnt[1]==i)
		flag=true;
	else if(cnt[i]==1)
		flag=true;
	else if(cnt[mx]*mx==i-1 && cnt[1]==1)
		flag=true;
	else if(cnt[mx]==1 && cnt[mx-1]*(mx-1)==i-mx)
		flag=true;
		
	return flag;
}

int main()
{
	int n,maxi=0;
	scanf("%d",&n);
	
	vec cnt(nax),rem(nax);
	
	int ans=0;
	loop(i,1,n){
		int color;
		scanf("%d",&color);
		cnt[rem[color] ]--;
		rem[color]++;
		cnt[rem[color]]++;
		max_self(maxi,rem[color]);
		
		bool flag = check_true(cnt,rem,maxi,i,color);
		flag?ans=i:1;
	}
	printf("%d\n",ans);
	return 0;
}
