
/**
 *    author        : Saurav Paul 
 *    created       : February 07, 2021 10:00 AM
 *    Problem Name  : B - Duff and Weight Lifting
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;
        int nx = 2e6 ;
        vector<int> v(nx) ;

        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            v[x] ++ ;
        }

        int ans = 0 ;
        for(int i = 0 ; i < nx - 1; i++){
            ans += (v[i]&1) ;
            v[i+1] += v[i]/2 ;
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
