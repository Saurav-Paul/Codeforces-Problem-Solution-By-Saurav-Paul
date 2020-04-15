				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {
 
    int n ; 
    cin >> n ;
    bool ok = true ;
    int a = 0, b = 0;
    for(int i = 0 ; i < n ; i++){
        int x ,y ;
        cin >> x >>y ;
        if(x < a or y < b or x < y or x-a < y-b){
            ok = false ;
        }
        a = x, b = y ;
    }
    cout << (ok ? "YES" : "NO") << endl ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }
 
    return 0;
}
