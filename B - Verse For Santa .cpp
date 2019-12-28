	/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
	int n , s ; cin >> n >> s;
	
	int mx = - 1, ind = 0 ;
	bool ok = false ;
	for(int i = 1 ; i <= n ; i ++ ){
		int x ; cin >> x;
		if(ok) continue ;
		if( x > mx ) {
			mx = x ;
			ind = i ;
		}
		if( x > s ) {
			cout << ind << endl ;
			ok = true ;
		}
		else {
			s -= x ;
		}
	}
	if(!ok)
		cout << 0 << endl ;
	
}

int main () {
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t;
	while(t--) {
		solve () ;
	}
	return 0 ;
}
