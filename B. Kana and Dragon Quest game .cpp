
/**
 *    author:  Saurav_Paul 
 *    created: 15.04.2020 20:44:56       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long x , n ,  m ;
    cin >> x >> n >>m ;
    while(n && x > 20 ){
        
        n -- ;
        long long t = x / 2 ;
        x = t + 10 ;
        
    }
    long long p = m * 10 ;
    cout << (p>=x? "YES" : "NO") << endl ;
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
