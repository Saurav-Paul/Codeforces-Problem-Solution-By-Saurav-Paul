
/**
 *    author:  Saurav_Paul 
 *    created: 10.01.2020 20:58:03       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

void factorization(ll n){
	ll sv  = n ;
	ll lim = sqrt(n) ;
	ll ans = n ;
	ll p = 1;
    for(ll x = 2; x <= lim ; x++){
		bool ok = false ;
		ll t = 1;
        while(n%x == 0){
            t *= x;
            n /= x;
			ok = true ;
        }
		p *= t;

		if(ok)
		ans = min( ans , max(p,sv/p));
		ans = min( ans , max(t,sv/t));
    }
	
	cout << ans << " " << sv/ans << endl ;
}

ll lcm(ll i , ll j){
	ll x = (i*j) /__gcd(i,j);
	return x;
}

int main()
{
	boost ;
	ll x; cin >> x;

	ll sq = sqrt(x) ;
	ll ans = x ;
	for(ll i = 2 ; i <= sq ; i++){
		if(x%i == 0){
			if(lcm(i,x/i)==x){
				ans = min ( ans , max(i,x/i));
			}
		}
	}
	cout << ans << " " << x/ans << endl ;


    return 0;
}
