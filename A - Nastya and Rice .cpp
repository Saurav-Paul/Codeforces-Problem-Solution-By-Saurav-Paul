
/**
 *    author:  Saurav_Paul 
 *    created: 23.04.2020 20:48:09       
**/

#include<bits/stdc++.h>
using namespace std;
void solve() {

    long long n , a, b , c, d ;
    cin >> n >> a >> b >> c >> d;
    long long mn = (a-b) * n ;
    long long mx = (a+b) * n ;
    long long extra = 2 * b ;
    if(mn > c+d || mx < (c-d)){
        cout << "No" << endl ;
    }
    else{
        cout << "Yes" << endl ;
    }
    
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
