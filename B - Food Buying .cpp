
/**
 *    author:  Saurav_Paul 
 *    created: 04.02.2020 20:48:36       
**/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;
void solve() {
    ll s;
    cin >> s;

    ll ans = 0 ;
    while(s > 9){
       ll x = s - s%10 ;
       ans += x;
       s = s/10 + s%10 ;
    }
    cout << ans+s << endl ;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
