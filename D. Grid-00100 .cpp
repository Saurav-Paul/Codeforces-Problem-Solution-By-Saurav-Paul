
/**
 *    author        : Saurav Paul 
 *    created       : August 03, 2020 9:31 PM
 *    Problem Name  : D. Grid-00100
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1371/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n , k ;
    cin >> n >> k;
    vector<vector<int>> v(n+1, vector<int> (n+ 1)) ;

    int every_row = k / n ;
    int extra = k - (every_row * n) ;
    int temp = extra ;

    auto ara_print = [&](){

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j <= n; j++){
                cout << v[i][j];
            }
            cout << endl ;
        }

    };

    for(int i = 1; i <= n ; i++){
        int x = every_row ;
        if(temp){
            x ++ ;
            temp -- ;
        }

        for(int j = i; x ; j++, x--){
            if(j > n) j = 1;
            v[i] [j] = 1 ;
        }
    }
    int mxr = 0 , mnr = 1e9 , mxc = 0 , mnc = 1e9 ;

    for(int i = 1 ; i <= n; i++){
        int cnt = 0 ;
        for(int j = 1 ; j <= n; j++){
            if(v[i][j]) cnt ++ ;
        }
        mxc = max(mxc,cnt) ;
        mnc = min(mnc,cnt) ;
    }

    for(int i = 1 ; i <= n; i++){
        int cnt = 0 ;
        for(int j = 1 ; j <= n; j++){
            if(v[j][i]) cnt ++ ;
        }
        mxr = max(mxr,cnt) ;
        mnr = min(mnr,cnt) ;
    }
    int ans = (mxr-mnr) * (mxr-mnr) + (mxc-mnc) * (mxc-mnc) ;
    cout << ans << endl ;
    ara_print() ;
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
