	/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
	int m , n ; cin >> m >> n ;
	vector<int> stk(m) , ord(n) ;
	
	for(int &x : stk) cin >> x;
	for(int &x : ord) cin >> x;
	
	vector<int> rem(m+2) ;
	long long int ts = 0 , point = 0 ;
	
	for(int y = 0 ; y < n ; y ++) {
		int x = ord[y] ;
		if(rem[x] == 1) {
			ts ++ ;
			continue ;
		}
		
		while(point < m){
			rem[stk[point]] = 1 ;
			if(stk[point] == x){
				point ++ ;
				break ;
			}
			else {
				point ++ ;
			}
		}
		ts += 2 * (point - y ) - 1;
	}
	cout << ts << endl ;
}

int main () {
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t;
	while(t--) {
		solve () ;
	}
	return 0 ;
}
