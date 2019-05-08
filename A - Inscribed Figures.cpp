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
	
	int n; scanf("%d",&n);
	vector<int> in;
	int temp;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		in.emplace_back(temp);
	}
	int total=0;
	bool isinfinity=false;
	for(int i=1;i<n; i++){
		if(in[i]==2 &&in[i-1]==1){
			total+=3;
		}
		if(in[i]==2 && in[i-1]==3){
			isinfinity=true;
			break;
		}
		if(in[i]==3 && in[i-1]==1){
			total+=4;
		}
		if(in[i]==3 && in[i-1]==2){
			isinfinity=true;
			break;
		}
		if(in[i]==1 && in[i-1]==3){
			total+=4;
		}
		if(in[i]==1 && in[i-1]==2){
			total+=3;
		}
		if(i>1){
			if(in[i]==2 && in[i-1]==1 && in[i-2]==3)
				total--;
		}
	}
	if(isinfinity)
		puts("Infinite");
	else{
		puts("Finite");
		printf("%d\n",total);
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
