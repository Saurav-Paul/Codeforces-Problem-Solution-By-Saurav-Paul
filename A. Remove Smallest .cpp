
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 8:36 PM
 *    Problem Name  : A. Remove Smallest
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1399/problem/a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector<int> v(n) ;

    for(auto &x : v) cin >> x ;
    sort(v.begin() , v.end()) ;
    
    bool ok = true ;
    for(int i = 1 ; i < n; i++){
        if(abs(v[i]-v[i-1]) > 1){
            ok = false ;
            break ;
        }

    }

    cout << (ok?"YES" : "NO") << endl ;
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
