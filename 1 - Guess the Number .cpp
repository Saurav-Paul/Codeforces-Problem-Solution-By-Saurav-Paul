	/* Saurav Paul */
#include<bits/stdc++.h>
using namespace std;

int main () {
	
	ios_base::sync_with_stdio(false) ;
	int low = 1 , high = 1e6  ;
	while(low < high ) {
		int mid = (low + high + 1) / 2 ;
		cout << mid <<endl ;
		cout << flush ;
		string s; cin >> s;
		if( s == ">="){
			low = mid ;
		}
		else{
			high = mid - 1;
		}
	}
	
	cout <<"! "<< low << endl ;
	cout << flush ;
	
	return 0 ;
}
