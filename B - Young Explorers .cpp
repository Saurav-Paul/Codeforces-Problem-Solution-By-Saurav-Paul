				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ;
    cin >> n ;
    vector< long long int > cnt(n+10) ;
    for(int i = 0 ; i < n ; i++){
        long long int x ;
        cin >> x;
        cnt[x] ++ ;
    }
    long long int ans = 0 ;
    long long int ex = 0 ;
    for(int i = 1 ; i <= n; i ++){
        cnt[i] += ex;
        ans += cnt[i]/i ;
        ex = cnt[i] % i ;
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
