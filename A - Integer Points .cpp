				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve() {
	ll n ; scanf("%lld",&n);
	
	ll xodd = 0 , xeven = 0;
	for(int i = 0 ;i < n; i++){
		ll x ; scanf("%lld",&x) ;
		if(x&1) xodd ++;
		else xeven ++;
	}
	ll m ; scanf("%lld",&m);
	
	ll yodd = 0 , yeven = 0;
	for(int i = 0 ; i < m ; i++){
		ll x  ; scanf("%lld",&x) ;
		if(x&1) yodd ++;
		else yeven ++;
	}
	
	ll ans = xodd * yodd + xeven * yeven;
	printf("%lld\n",ans) ;
}

int main()
{
	int testcase ;
	scanf("%d",&testcase);
	while(testcase--){
			solve() ;
		
	}
    return 0;
}
