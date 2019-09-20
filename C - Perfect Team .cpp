				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

void solve(){
	ll coder, mathe , normo ;
	scanf("%lld%lld%lld",&coder,&mathe,&normo);
	
	ll mn = min(coder,mathe);
	ll x = normo ;
	normo += (coder-mn) + (mathe-mn);
	if(normo >= mn){
		printf("%lld\n",mn);
		return ;
	}
	else{
		ll ans = coder + mathe + x;
		ans /= 3;
		printf("%lld\n",min(mn,ans) );
	}
	
}

int main()
{
	int t; scanf("%d",&t);
	for(int i = 1; i <= t ; i++)
		solve();
		
    return 0;
}
