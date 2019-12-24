				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ; 

void solve () {
	ll a, b , c , r;
	cin >> a >> b >> c >> r;
	if( a > b ) swap(a, b) ;
	ll ans= abs(b - a) ;
	
	
	ll x = c-r ;
	ll y = c + r;
	
	x = max( x, a ) ;
	y = min( y , b) ;
	ll z = max( 0LL  , y - x) ;
	
	ans -= z ;
	cout << ans << endl ;
	
}

int main()
{
	ll t ; cin >> t;
	while(t--){
		solve () ;
	}

    return 0;
}
