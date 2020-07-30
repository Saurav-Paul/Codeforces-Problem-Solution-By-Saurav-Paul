
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 8:35 PM
 *    Problem Name  : A. LCM Problem
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1389/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l , r ;
    cin >> l >> r ;
    int x = l , y = 2 * l ;
    if(y > r){
        cout << - 1 << " " << -1 << endl ;
    }
    else{
        cout << x << " " << y << endl ;
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
