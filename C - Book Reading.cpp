				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

void solve(){
	ll n, m;
	scanf("%lld%lld",&n,&m);
	
	ll firstten = 0;
	for(ll cnt = 1 , i = m ; cnt <= 10 and i <= n; cnt ++, i += m){
		firstten += i%10;
	}
	ll ans = firstten * max(0LL,n/(m*10));
	n %= m*10;
	for(ll i = m ; i <= n ; i += m)
		ans += i%10;
		
	printf("%lld\n",ans);
}

int main()
{
	int q;
	scanf("%d",&q);
	for(int i = 0; i < q ; i++)
		solve();
		
    return 0;
}
