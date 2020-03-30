				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {

    int a , b;
    cin >> a >> b;
    int ans = ceil((double)a/b) ;
    ans = ans*b - a;
    cout << ans << endl ;
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
