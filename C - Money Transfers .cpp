
/**
 *    author        : Saurav Paul 
 *    created       : February 28, 2021 10:16 AM
 *    Problem Name  : C - Money Transfers
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n ; cin >> n ;
        map<ll,ll> rem ;
        ll ans = n - 1 , x = 0;

        for(int i = 1; i <= n ; i++){
            ll t ; cin >> t ;
            x += t ;
            rem[x] ++ ;
            ans = min(ans, n - rem[x]) ;
        }

        cout << ans << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
