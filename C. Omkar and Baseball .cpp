
/**
 *    author        : Saurav Paul 
 *    created       : August 02, 2020 11:27 AM
 *    Problem Name  : C. Omkar and Baseball
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1372/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    bool ok = true ;
    int ans = 0 ;
    for(int i = 1 ; i <= n; i++){
        int x ; 
        cin >> x ;
        if(x != i) ok = false ;
        else if(ok == false && x==i){
            ++ ans ;
            ok = true ;
        }
    }
    if(!ok) ans ++ ;
    cout << min(ans,2) << endl ;
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
