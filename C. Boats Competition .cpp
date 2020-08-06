
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 8:50 PM
 *    Problem Name  : C. Boats Competition
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1399/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n) ;

    for(auto &x : v) cin >> x;

    map<int,int> cnt ;
    bool rem[500][500]  = {};

    for(int i = 0 ; i< n ; i++){
        for(int j = i + 1 ; j < n ; j++){

            int temp = v[i] + v[j] ;
            if(rem[i][temp] or rem[j][temp]) continue ;

            cnt[temp] ++ ;
            rem[i][temp]  = true ;
            rem[j][temp]  = true ;


        }
    }

    int ans = 0 ;
    for(auto x : cnt) ans = max(ans, x.second) ;

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
