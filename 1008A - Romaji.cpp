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
	string s; cin>>s;
	s+='k';
	string v="aeioun";
	string vowel="aeiou";
	for(int i=0,n=s.size()-1; i< n ; i++){
		char c=s[i];
		bool check=false;
		for(int j=0; j<6 ; j++){
			if(c==v[j]){
				check =true ;
				break ;
			}
		}
		if(!check){
			c=s[i+1];
			check=false;
			for(int j=0; j<5 ; j++){
				if(c==vowel[j]){
					check =true ;
					break ;
				}
			}
			if(!check){
				puts("NO");
				return 0;
			}
		}
		
	}
	puts("YES");
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
