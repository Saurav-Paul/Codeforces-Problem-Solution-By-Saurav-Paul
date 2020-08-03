
/**
 *    author        : Saurav Paul 
 *    created       : August 03, 2020 9:07 PM
 *    Problem Name  : C. A Cookie for You
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1371/problem/c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b , n , m ;
    cin >> a >> b >> n >> m;
    bool ok = false ;
    if ((a + b >= n + m) && (min(a,b) >= m) ) ok = true ;
    cout << (ok?"Yes" : "No") << endl ;
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
