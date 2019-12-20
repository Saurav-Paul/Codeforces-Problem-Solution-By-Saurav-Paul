#include<bits/stdc++.h>
using namespace std;

void solve () {
	
	string s ; cin >> s;
	int cnt = 0 ;
	bool even = false , zero = false;
	for(auto x : s){
		if( x == '0'){
			if(zero) even = true ;
			else zero = true;
		}
		else if( x%2 == 0 ){
			even = true ;
		}
		cnt += (x-'0') ;
	}
	if( even && zero && (cnt%3==0) ) cout << "red" << endl ;
	else cout << "cyan" << endl ;
	
}

int main () {
	ios_base::sync_with_stdio(false) ;
	
	int t; cin >> t;
	while(t--){
		solve () ;
	}
	
	return 0 ;
}
