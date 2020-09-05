
/**
 *    author        : Saurav Paul 
 *    created       : September 04, 2020 8:38 PM
 *    Problem Name  : B. Minimum Product
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{


    public :
    void solve(){
        ll a , b , x, y, n ;
        cin >> a >> b >> x >> y >> n ;

        ll ans = min(cal(a,b,x,y,n),cal(b,a,y,x,n)) ;

        cout << ans << endl ;

    }
    ll cal(ll a, ll b , ll x , ll y , ll n){

        ll t = min(n,a-x) ;
        n = n - t;
        a -= t;
        t = min(n,b-y) ;
        b -= t;

        return a * b;
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
