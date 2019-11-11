#include<bits/stdc++.h>
using namespace std;
using ll = long long int ; 
 
int main()
{
    ios_base::sync_with_stdio(false) ;
 
    ll n ; cin >> n;
    ll  x = 0 ;
    for(ll i = 2 ; i * i <= n ; i ++){
        if(n%i == 0){
            x = __gcd(x,i) ;
            x = __gcd(x , n/i) ;
        }
    }
    cout << (x==0?n:x) << endl ;
    return 0;
}
