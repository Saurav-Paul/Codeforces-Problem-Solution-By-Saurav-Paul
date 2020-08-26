
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 9:02 PM
 *    Problem Name  : C. Mere Array
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1401/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    int N ;
    cin >> N ;

    vector<ll> v(N) , s;
    ll mn = 1e18 ;
    for(auto &x : v) cin >> x, mn = min(mn,x) ;

    s = v ;
    sort(s.begin(),s.end()) ;

    bool ok = true ;
    for(int i = 0 ; i < N ; i++){
        if(__gcd(v[i],mn) == mn) continue ;
        if(v[i] == s[i]) continue ;
        ok = false ;
        break ;
    }

    cout << (ok?"YES":"NO") << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
