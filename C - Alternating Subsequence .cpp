
/**
 *    author:  Saurav_Paul 
 *    created: 21.04.2020 21:05:43       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n ;
    cin >> n ;
    vector<long long > v(n) , ara;
    for(auto &x : v){
        cin >> x ;
    }
    bool neg = 0 ;
    if(v[0] < 0) neg = 1;
    long long mx = v[0] ;
    for(int i = 0 ; i < n ; i++){
        bool ok = 0 ;
        if(v[i] < 0) ok = 1 ;
        if(ok == neg){
            mx = max(mx,v[i]) ;
        }
        else{
            ara.push_back(mx) ;
            mx = v[i] ;
            neg ^= 1 ;
        }
    }
    ara.push_back(mx) ;
    long long ans = 0 ;
    for(auto x : ara){
        ans += x ;
    }
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
