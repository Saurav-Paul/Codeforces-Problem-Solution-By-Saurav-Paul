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
bool check(string s, string a, string b){
	bool flag=false,next=false;
	ll k=0;
	ll tsz=a.size();
	ll sz= s.size();
	for(int i=0; i< sz ; i++){
		if(s[i]==a[0]){
			if(i+tsz>=sz){
				break ;
			}else{
				for(int j=0; j< tsz ; j++){
					if(s[i+j]!=a[j]){
						break ;
					}
					if(j+1==tsz){
						k=i+j;
						next=true;
						break ;
					}
				}
				
			}
		}
		if(next){
			break ;
		}
	}
	tsz=b.size();
	if(next){
		for(ll i=k+1; i< sz ;i++){
			if(s[i]==b[0]){
				if(i+tsz>sz){
					break ;
				}
				else{
					for(int j=0; j< tsz ; j++){
						if(s[i+j]!=b[j]){
							break ;
						}
						if(j+1==tsz){
							flag=true;
							break ;
						}
					}
					
					
				}
				
			}
			if(flag){
				break ;
			}
		}
	}
	return flag;
}
int main()
{
	ios_base::sync_with_stdio(0);
	string s,a,b;
	cin>>s>>a>>b;
	bool forward=check(s,a,b);
	reverse(all(s));
	bool backward=check(s,a,b);
	if(forward && backward)
		puts("both");
	else if(forward)
		puts("forward");
	else if(backward)
		puts("backward");
	else
		puts("fantasy");
	
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
