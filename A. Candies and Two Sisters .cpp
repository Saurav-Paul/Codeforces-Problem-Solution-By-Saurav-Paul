				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n ;
    cin >> n ;
    if(n%2==0) n-- ;
    cout << (n/2) << endl ;
    
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
