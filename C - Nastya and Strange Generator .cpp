
/**
 *    author:  Saurav_Paul 
 *    created: 23.04.2020 21:50:06       
**/

#include<bits/stdc++.h>
using namespace std;
void solve() {

    long long n ;
    cin >> n ;
    long long cnt = 0 ;
    vector<long long > v(n) ;
    bool ok = true ;
    for(auto &x : v){
        cin >> x;
    }
    for(int i = 1 ; i < n; i++){
        if(v[i] -v[i-1] > 1){
            ok = false ;
            break ;
        }
    }
    cout << (ok?"Yes":"No") << endl ;
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
