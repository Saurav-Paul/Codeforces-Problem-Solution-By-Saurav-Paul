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
	string a, b;
	cin>>a>>b;
	bool check =true; 
	ll diff=0;
	ll sza=a.size();
	ll szb=b.size();
	if(sza!=szb){
		puts("NO");
		return 0;
	}else{
		vec index;
		for(int i=0; i< sza; i++){
			if(a[i]!=b[i]){
				diff++;
				index.emplace_back(i);
			}
		}
		if(diff==2){
			if(a[index[0]]!=b[index[1]] || a[index[1]]!=b[index[0]]){
				check=false;
			}
			
			
		}else{
			check=false;
		}
		
	}
	if(check)
		puts("YES");
	else
		puts("NO");
	
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
