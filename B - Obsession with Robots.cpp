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

int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	bool flag=true,u,d,r,l;
	u=d=r=l=false;
	ll x=0,y=0,sz=s.size();
	bool check[250][250];
	memset(check,false,sizeof(check));
	check[110][110]=true ;
	for(int i=0; i< sz; i++){
		if(s[i]=='R')
			y++,r=true;
		else if (s[i]=='L')
			y--,l=true;
		else if(s[i]=='D')
			x--,d=true;
		else if(s[i]=='U')
			x++,u=true;

		if(check[110+x][110+y]==true){
			flag=false;
			break ;
		}else{
			check[110+x][110+y]=true;
			if(!u && check[110+x-1][110+y]){
				flag=false;
				break ;
			}
			if(!d && check[110+x+1][110+y]){
				flag=false;
				break ;
			}
			if(!r && check[110+x][110+y-1]){
				flag=false;
				break ;
			}
			if(!l && check[110+x][110+y+1]){
				flag=false;
				break ;
			}
			
			u=d=r=l=false;
		}
	}
	if(flag)
		puts("OK");
	else{
		
		puts("BUG");
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
