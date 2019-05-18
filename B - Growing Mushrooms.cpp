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
#define dbg(x)                cout <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////
bool custom_sort(pair<double,ll> a, pair<double,ll> b){
	if(a.first==b.first){
		return a.second<b.second ;
	}else{
		return a.first>b.first ;
	}
}
int main()
{
	ll n;
	double t1,t2,k;
	scanf("%lld%lf%lf%lf",&n,&t1,&t2,&k);
	double u,v;
	double temp,temp1;
	vector<pair<double,ll> > ans;
	for(ll i=1; i<= n; i++){
		scanf("%lf%lf",&u,&v);
		if(u>v)
			swap(u,v);
		temp=(t1*u);
		temp=temp - ((temp*k)/100.0)+(t2*v);
		
		temp1=(t1*v);
		temp1=temp1 -((temp1*k)/100.0)+(t2*u);
		ans.emplace_back(make_pair(max(temp1,temp),i));
	}
	sort(all(ans),custom_sort);
	for(auto i : ans){
		printf("%lld %.2lf\n",i.second,i.first);
	}
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
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}
