
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 8:54 PM
 *    Problem Name  : B. Ternary Sequence
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1401/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    ll x1 , y1 , z1 , x2 , y2 , z2 ;
    cin >> x1 >> y1 >> z1 ;
    cin >> x2 >> y2 >> z2 ; 

    // need to minimize the minus 2 and maximize the plus 2

    ll answer = 0 ;
    ll t = min(x1 , z2) ;
    x1 -= t ;
    z2 -= t;

    t = min(z1,y2) ;

    answer += (t * 2) ;
    z1 -= t ;
    y2 -= t ;

    t = min(z1,z2) ;
    z2 -= t ;
    z1 -= t ;

    answer -= (z2 * 2) ;

    cout << answer << endl ;


}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
