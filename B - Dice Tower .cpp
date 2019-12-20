#include<bits/stdc++.h>
using namespace std;

void solve () {
	long long int n , x; 
	scanf("%lld",&n) ;
	x = n % 14 ;
	if( n > 14 && x > 0 && x < 7 )
		puts("YES") ;
	else
		puts("NO") ;
	
}

int main () {
	int n ; 
	scanf("%d",&n) ;
	
	while(n--)
		solve () ;
	
	return 0 ;
}
