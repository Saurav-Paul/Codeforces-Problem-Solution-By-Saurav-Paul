
/**
 *    author        : Saurav-Paul 
 *    created       : September 27, 2020 9:32 AM
 *    Problem Name  : C - Mortal Kombat Tower
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1418/c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 90 ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;

        vector<vector<int>> dp(n+10,vector<int>(2,INF)) ;
        vector<int> v(n) ;
        for(auto &x : v) cin >> x ;

        dp[0][0] = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(bool who : {1,0}) {
                int cost = 0 ;
                for(int j = 1 ; j <= 2 && i + j  <= n ; j++){
                    cost += v[i+j-1] ;
                    dp[i+j][who] = min(dp[i+j][who] , dp[i][who^1] + who * cost) ;
                }
            }
        }

        cout << min(dp[n][0],dp[n][1]) << endl ;

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
