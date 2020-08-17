
/**
 *    author        : Saurav Paul 
 *    created       : August 12, 2020 9:12 PM
 *    Problem Name  : A. Boboniu Likes to Color Balls
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1395/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    ll r , g , b , w;
    cin >> r >> g >> b >> w;

    auto cnt = [&](){
        ll x = 0 ;
        if(r%2==0) x++ ;
        if(g%2==0) x++ ;
        if(b%2==0) x++ ;
        if(w%2==0) x++ ;
        return x;
    };

    string ans = "No" ;
    if(cnt() >= 3) ans = "Yes" ; 
    
    ll t = min({1LL,r,g,b}) ;
    r -= t ;
    g -= t ;
    b -= t;
    w += (3 *t) ;
    if(cnt() >= 3) ans = "Yes" ;
    cout << ans << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 1 ; i <= testcase ; i ++){
        solve();
    }

    return 0 ;
}
