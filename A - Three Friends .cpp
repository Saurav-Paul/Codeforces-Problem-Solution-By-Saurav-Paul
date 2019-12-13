				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

void solve () {
	vector<ll> v(3) ;
	for(auto &x : v ){
		cin >> x ;
	}
	sort(v.begin() , v.end() );
	
	if(v[0] == v[1] ){
		v[2] -= min(v[2]-v[1] , 2LL) ;
	}
	else if(v[1] == v[2] ){
		v[0] += min(v[1]-v[0] , 2LL ) ;
	}
	else{
		v[0] ++;
		v[2] --;
	}
	
	ll ans = v[1]-v[0] + v[2] - v[0] + v[2] - v[1] ;
	cout << ans << endl ;
}

int main()
{
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t;
	
	while(t--) 
		solve () ;
	
    return 0;
}
