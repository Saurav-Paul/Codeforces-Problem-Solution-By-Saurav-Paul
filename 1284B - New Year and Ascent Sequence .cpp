	/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std; 
using ll = long long int ;

int main () {
	ios_base::sync_with_stdio(false) ;
	ll t; cin >> t;
	vector<ll> bg,sm ;
	
	for(int i = 0; i < t; i ++ ){
		ll mx = 0 , mn = 0 , l;
		cin >> l ;
		bool ok = false ;
		for(int j = 0 ; j < l ; j ++){
			ll x ; cin >> x;
			if(j){
				if(mn<x){
					ok = true ;
				}
				mx = max(mx,x) ;
				mn = min(mn,x) ;
			}
			else{
				mx = mn = x;
			}
		}
		if(ok){
			mx = 1e9 + 90 ;
			mn = -1 ;
		}
		sm.emplace_back(mn) ;
		bg.emplace_back(mx) ;
	}
	sort(bg.begin() , bg.end() ) ;
	
	ll ans = 0 ;
	for(int i = 0 ; i < t ; i ++ ){
		ll ind = upper_bound(bg.begin() , bg.end() , sm[i]) - bg.begin() ;
		ans += (t - ind) ;
	}
	cout << ans << endl ;
	
	return 0 ;
}
