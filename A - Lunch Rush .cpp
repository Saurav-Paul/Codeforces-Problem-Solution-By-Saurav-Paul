
/**
 *    author        : Saurav Paul 
 *    created       : March 28, 2021 8:35 AM
 *    Problem Name  : A - Lunch Rush
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n , k ; cin >> n >> k ;
        ll ans = 0 ;
        bool first = true ;
        for(int i = 0 ; i < n ; i++){
            ll f , t ; cin >> f >> t ;
            ll get = 0 ;
            if(t > k){
                get = f - (t - k)  ;
            }
            else{
                get = f ;
            }
            if(first) ans = get ;
            else ans = max( ans , get) ;
            first = false ;
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
