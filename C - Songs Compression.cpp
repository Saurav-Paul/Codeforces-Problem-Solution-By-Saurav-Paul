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
typedef vector<ll> vec;;
void FAST_IO();
void ara_read(vec &v,ll n,ll &total);
////////////////////////
bool customSort(ll a, ll b){
	return a > b ;
}
int main()
{
	ll n, m;
	scanf("%lld%lld",&n,&m);
	ll total=0,cnt=0;
	vec songs;
	ara_read(songs,n,total);
	sort(all(songs),customSort);
	for(int i=0;  ; i++){
		if(total<=m)
			break;
		if(i==n){
			puts("-1");
			return 0;
		}

		cnt++;
		total-=songs[i];

	}
	printf("%lld\n",cnt);
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
void ara_read(vec &v,ll n, ll &total){
	ll a,b;
	for(ll i=0; i<n; i++){
		scanf("%lld%lld",&a,&b);
		v.emplace_back(abs(a-b));
		total+=a;
	}
	
}
