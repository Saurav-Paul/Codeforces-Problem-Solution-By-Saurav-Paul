				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define boost		          ios_base::sync_with_stdio(0);

using ll = long long int ;

void solve () {
	ll n , p , k ; cin >> n >> p >> k ;
	vector<ll> v(n) ;
	
	for(auto &x : v) cin >> x ;
	sort(v.begin() , v.end()  ) ;

	
	ll ans = 0 ;
	
	ll low = 0 , high = n ;
	while( low < high ) {
		ll mid = low + ( (  high - low ) >> 1 ) ;
		ll cnt = 0 ;
		
		
		ll coin = p ;
		
		for(ll i = mid ; i >= 0 ; i -= k){
			coin -= v[i] ;
			if( coin < 0 ) break ;
			cnt += min( k , i + 1 ) ;
			
		}
		ans = max( ans , cnt ) ;
		if( coin < 0 ){
			high = mid ;
		}
		else{
			low = mid + 1;
		}
	}
	
	cout << ans << endl ;
	
}
 
int main()
{
	boost ;
	int t; cin >> t;
	while(t--){
		solve () ;
	}
 
    return 0;
}
