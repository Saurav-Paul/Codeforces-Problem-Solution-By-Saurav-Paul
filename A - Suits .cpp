#include<bits/stdc++.h>
using namespace std;

int main() {
	int a , b , c , d , e , f;
	cin >> a >> b >> c >> d >> e >> f;
	long long int ans = 0;
	if(e > f){
		int x = min(a,d) ;
		d -= x ;
		ans = x * e + min({b , c , d}) * f ;
	}
	else{
		int x = min({b,c,d}) ;
		d -= x;
		ans = x * f + min(a,d) * e ;
	}
	cout << ans << endl ;
	
	return 0 ;
}
