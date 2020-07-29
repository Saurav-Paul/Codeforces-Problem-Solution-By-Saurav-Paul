
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 1:16 PM
 *    Problem Name  : C. Create The Teams
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1380/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n , x;
    cin >> n >> x;

    vector<long long> v(n) ;
    for(auto &x : v){
        cin >> x ;
    }

    sort(v.begin(), v.end()) ;

    int ans = 0 , cnt = 1 ;

    for(int i = n -1 ; i >= 0 ; i--){
        if(cnt * v[i] >= x){
            ++ ans ;
            cnt = 0 ;
        }
        ++ cnt ;
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
