				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define boost		          ios_base::sync_with_stdio(0);
using ll = long long int ;

int main()
{
	boost ;
	ll n ; cin >> n;
	vector<ll> v(n);
	
	for(ll &x : v){
		cin >> x ;
	}
	
	sort(v.begin() , v.end() ) ;
	ll i = 0, j = n-1;
	ll x= 0 , y = 0;
	
	bool ok = false;
	while( i <= j){
		if(ok){
			x += v[i] ;
			i++;
		}
		else{
			y += v[j] ;
			j--;
		}
		ok ^= 1;
	}
	
	ll ans = x * x + y  * y;
	cout << ans << endl ; 
	
    return 0;
}
