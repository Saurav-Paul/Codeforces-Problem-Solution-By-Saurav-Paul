
/**
 *    author        : Saurav Paul 
 *    created       : July 22, 2020 11:47 AM
 *    Problem Name  : A. Common Subsequence
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1382/problem/A
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m ;
    cin >> n >> m;
    vector<int> v(1001,0) ;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        v[x] ++ ;
    }
    bool ok = false;
    int ans = 0;
    for(int i = 0 ; i < m ; i++ ){
        int x;
        cin >> x;
        if(v[x]){
            ok = true;
            ans = x;
        }
    }
    if(ok){
        cout << "YES" << endl ;
        cout << 1 << " " << ans << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
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
