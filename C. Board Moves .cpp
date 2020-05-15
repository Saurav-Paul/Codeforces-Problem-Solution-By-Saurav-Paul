
/**
 *    author:  Saurav_Paul 
 *    created: 14.05.2020 20:52:18       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ;
    cin >> n;
    long long int k = n/2 ;
    long long int ans = 0 ;
    long long int st = 8 ;
    for(int i = 1 ; i <= k; i ++){
        ans += (st * i) ;
        st += 8 ;
    }
    cout << ans << endl ;
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
