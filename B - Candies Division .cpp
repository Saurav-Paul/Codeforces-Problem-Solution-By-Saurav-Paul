  /*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;
void solve () {
	ll n , k ; cin >> n >> k;
	ll x = k/2 ;
	ll total = n / k ;
	total *= k ;
	total += min(n-total ,x );
	cout << total << endl ;
}
 
int main()
{
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t ;
	while(t--){
		solve () ;
	}
    return 0;
}
