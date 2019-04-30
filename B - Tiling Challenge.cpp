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
////////////////////////

int main()
{
	ll n; cin>>n;
	char ara[n][n];
	for(int i=0; i< n; i++){
		for(int j=0; j<n; j++){
				
			cin>>ara[i][j];
		}
	}

	for(int i=1; i< n-1; i++){
		for(int j=1; j<n-1; j++){
			if(ara[i][j]=='.' && ara[i-1][j]=='.' && ara[i+1][j]=='.'  && ara[i][j-1]=='.' && ara[i][j+1]=='.')
			{
				ara[i][j]='#';
				ara[i+1][j]='#';
				ara[i-1][j]='#';
				ara[i][j-1]='#';
				ara[i][j+1]='#';
			}
		}
		
	}
	

	bool check=true;
	
		for(int i=0; i< n; i++){
		for(int j=0; j<n; j++){
				
			if(ara[i][j]=='.'){
				check=false;
				break;
			}
		}
	}
	if(check)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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
