				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
    int a , b , x , y ;
    cin >> a >>  b >> x >> y ;
    ++x , ++y ;
    int ans = 0 ;
    bool ok = false ;
    again :
    if(x < a){
        ans = max(ans, (a-x) * b) ;
    }
    if(x > 1){
        ans = max(ans , (x-1) * b) ;
    }
    if(!ok){
        ok = true ;
        swap(a,b);
        swap(x,y);
        goto again ;
    }
    cout << ans << endl ;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve () ;
    }

    return 0;
}
