				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve () {
	int a, b ; scanf("%d%d",&a,&b) ;
	ll diff = abs(a-b) ;
	ll n = 0;
	ll sum = 0;
	while( sum < diff ) {
		sum += n ;
		if( sum < diff ) n ++ ;
		else break ;
		
	}
	
	sum -= diff ;
	if( sum & 1) {
		if(n & 1) n ++ ;
		n ++;
	}
	cout << n << endl ;
	
}

int main()
{
	
	int t ; scanf("%d",&t) ;
	while(t--){
		solve () ;
	}

    return 0;
}
