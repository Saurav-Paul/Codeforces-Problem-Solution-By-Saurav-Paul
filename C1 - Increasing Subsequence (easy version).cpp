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
	ll n; scn(n);
	string ans="";
	vec in;
	ll i,j,prev=0;
	for(int k=0; k<n; k++){
		ll temp; scn(temp);
		in.emplace_back(temp);
	}
	bool flag=true;
	i=0,j=n-1;
	while(flag){
		flag=false;
		if(i>j)
			break;
		ll l=in[i], r=in[j];
		
		if(l>prev && l<=r){
			flag=true;
			i++;
			ans+='L';
			prev=l;
			continue;
		}
		if(r>prev && r<=l){
			flag=true;
			j--;
			ans+='R';
			prev=r;
			continue;
		}
		if(l>prev ){
			flag=true;
			i++;
			ans+='L';
			prev=l;
			continue;
		}
		if(r>prev ){
			flag=true;
			j--;
			ans+='R';
			prev=r;
			continue;
		}
		
	}
	printf("%lld\n",(ll)ans.size());
	cout<<ans<<endl;
	
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
