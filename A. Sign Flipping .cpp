
/**
 *    author        : Saurav Paul 
 *    created       : August 04, 2020 12:43 PM
 *    Problem Name  : A. Sign Flipping
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1375/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        int x ;
        cin >> x;
        if(i&1) x = abs(x) ;
        else x = (x < 0 ? x : x * -1 ) ;
        cout << x << " " ;
    }
    cout << endl ;
    
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
