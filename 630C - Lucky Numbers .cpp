				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
ll f(ll n ){
	return (ll)pow(2,n+1) - 2 ;
}

int main()
{
	long long int n;
	scanf("%lld",&n) ;	
	printf("%lld\n",f(n)) ;
	
    return 0;
}
