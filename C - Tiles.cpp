#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
using namespace std;

long long power ( long long a, long long p, long long m )
{
    long long ret = 1;
    a %= m;
    while(p){
		if(p&1)
			ret = (ret%m * a%m)%m;
		a = (a%m * a%m) %m;
		p >>=1;
	}
	return ret;
}

int main()
{
	boost ; 
	ll w , h; 
	cin >> w >> h ;

	const ll mod = 998244353;
	cout <<(power(2,w,mod)* power(2,h,mod))%mod << endl;
	
    return 0;
}
