
/**
 *    author        : Saurav Paul 
 *    created       : March 01, 2021 9:25 PM
 *    Problem Name  : B. Minimal Cost
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1491/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , u , v;
        cin >> n >> u >> v;

        vector<int> a(n) ;
        int ans = INT_MAX;

        for(int i = 0 ; i < n; i++){
            cin >> a[i] ;
        }

        for(int i = 1 ; i < n ; i++){
            if(abs(a[i]-a[i-1]) == 1) ans = min(ans , min(u,v)) ;
            if(abs(a[i]-a[i-1]) >= 2) ans = 0 ;
            if(a[i] == a[i-1]) ans = min(ans , v + min(u,v)) ;
        }

        cout << ans << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
