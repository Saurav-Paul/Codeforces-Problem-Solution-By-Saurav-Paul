
/**
 *    author        : Saurav Paul 
 *    created       : April 01, 2021 9:43 PM
 *    Problem Name  : A. Strange Table
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1506/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n , m , x ;
        cin >> n >> m >> x ;
        ll col = (x + n - 1) / n ;
        ll row = (x % n == 0 ? n : x % n) ;
        ll ans = (row - 1) * m + col ;
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
