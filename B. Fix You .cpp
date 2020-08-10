
/**
 *    author        : Saurav Paul 
 *    created       : August 09, 2020 8:42 PM
 *    Problem Name  : B. Fix You
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1391/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m ;
    cin >> n >> m ;

    vector<string> v(n) ;
    for(int i = 0 ; i < n ;i++){
        cin >> v[i] ;
    }
    int ans = 0 ;
    for(int i = 0 ; i < n; i++){
        if(v[i][m-1] == 'R') ans ++ ;
    }

    for(int j = 0 ; j < m ; j++){
        if(v[n-1][j] == 'D') ans ++ ; 
    }
    cout << ans << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
