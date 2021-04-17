/**
 *    author        : Saurav Paul 
 *    created       : February 28, 2021 9:47 AM
 *    Problem Name  : B - Restoring Painting
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n , a, b , c, d ;
        cin >> n >> a >> b >> c >> d ;

        ll cnt = 0 ;

        ll ax = a+b + 1 , ay = a+b + n ;
        ll bx = b + d + 1, by = b + d + n ;
        ll cx = a + c + 1 , cy = a + c + n ;
        ll dx = c + d + 1 , dy = c + d + n ;

        pair<ll,ll> p = cal(ax, ay , bx , by) ;
        p = cal(p.first, p.second , cx , cy);
        p = cal(p.first, p.second , dx , dy);

        cnt = max(0LL , p.second - p.first + 1) ;
        cnt *= n ;

        cout << cnt << endl ;

    }

    pair<ll,ll> cal(ll a ,ll b ,ll x,ll y ){
        return make_pair(max(a,x),min(b,y)) ;
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
