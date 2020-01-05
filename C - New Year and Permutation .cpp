	/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

int main () {
	ll n , mod ; cin >> n >> mod ;
	vector<ll> v(n+1) ;
	v[1] = 1;
	for(int i = 2 ; i <= n ; i ++){
		v[i]  = ( v[i-1] * i ) % mod ;
	}
	ll ans = 0;
	for(int i = 1; i <= n ; i ++){
		ans += (n-i+1) * ( v[i] * v[n-i+1] % mod) ;
		ans %= mod ;
	}
	cout << ans << endl ;
	return 0 ;
}
