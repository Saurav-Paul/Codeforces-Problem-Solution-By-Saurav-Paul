				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {

    int  a, b;
    cin >> a >> b;
    int diff = b - a;
    if(diff == 0 ){
        cout << 0 << endl ;
    }
    else if(diff > 0){
        if(diff&1) cout << 1 << endl ;
        else cout << 2 << endl ;
    }
    else{
        if(diff&1) cout << 2 << endl ;
        else cout << 1 << endl ;
    }
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
