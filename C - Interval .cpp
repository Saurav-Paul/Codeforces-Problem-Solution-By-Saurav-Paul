
/**
 *    author        : Saurav Paul 
 *    created       : August 31, 2020 10:04 AM
 *    Problem Name  : C - Interval
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/205/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{


    ll find_it(ll x){
        if(x < 10) return x ;

        ll rem = x / 10 ;
        ll ans = rem;
        ll reminder = x % 10 ;

        while(x >= 10) x/= 10 ;

        if(x > reminder) ans -- ;

        ans += 9 ;

        return ans ;


    }


    public :
    void solve(){
        ll l , r ;
        cin >> l >> r;
        ll x = find_it(l-1) ;
        ll y = find_it(r) ;

        cout << y - x << endl ;

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
