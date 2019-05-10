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

typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;

////////////////////////

int main()
{
	ll n,m;
	scn(n);
	scn(m);
	vector<ll> number(n,1);
	ll i=0;
	while(m){
		if(i>=n)
			i=0;
		if(number[i]){
			number[i]=0;
			i++;
			m--;
		}
		i++;
	}
	ll cnt=0;
	bool check=true;
	for(auto k: number){
		if(check && k)
		{
			cnt++;
			check=false;
		}
		else if(!k){
			check=true;
		}
	}
	printf("%lld\n",cnt);
    return 0;
}
