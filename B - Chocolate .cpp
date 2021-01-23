
/**
 *    author        : Saurav Paul 
 *    created       : December 28, 2020 9:14 AM
 *    Problem Name  : B - Chocolate
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n ; cin >> n ;
    int cnt = 1 ;
    long long ans = 1;
    bool ok = true ;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x;
        if(x == 1){
            ans *= cnt ;
            cnt = 1 ;
            ok = false ;
        }
        else{
            if(ok) continue ;
            ++ cnt ;
        }
    }

    if(ok) ans = 0 ;
    cout << ans << endl ;

    return 0 ;
}
