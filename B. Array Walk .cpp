
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 8:41 PM
 *    Problem Name  : B. Array Walk
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1389/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k , z ;
    cin >> n >> k >> z;

    vector<int> v(n) ;
    for(auto &x : v){
        cin >> x ;
    }
    vector<long long> cum(n) ;
    for(int i = 0 ; i< n; i++){
        if(i){
            cum[i] = cum[i-1] + v[i] ;
        }
        else{
            cum[i] = v[i] ;
        }
    }

    long long ans = v[0] ;
    
    for(int i =  1; i < min(n , k + 1 ) ; i++){
        ans += v[i] ;

    }

    if(z)
    for(int i = 1 ; i < n && k ; i++){
        k -- ;
        int tz = min(z , k/2) ;
        int tk = k - 2 * tz ;
        long long temp = tz * v[i] + tz * v[i-1] ;
        if(z-tz > 0 && tk){
          temp += v[i-1] + cum[i+tk-1] ;
        }
        else{
          temp += cum[i+tk] ;
        }
        ans = max(ans,temp) ;

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
