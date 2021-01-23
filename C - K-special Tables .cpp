
/**
 *    author        : Saurav Paul 
 *    created       : November 23, 2020 9:07 AM
 *    Problem Name  : C - K-special Tables
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/625/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , k ; 
        cin >> n >> k ;

        vector< vector<int> > v(n+1 , vector<int>(n+1)) ;

        int counter = 0 ;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j < k ; j++){
                v[i][j] = ++counter ;
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = k ; j <= n; j++){
                v[i][j] = ++counter ;
            }
        }

        int cnt = 0 ;

        for(int i = 1; i <= n ; i++) cnt += v[i][k] ;

        cout << cnt << endl ;
        for(int i= 1; i <= n ; i++){
            for(int j= 1; j <= n; j++){
                cout << v[i][j] << " " ;
            }
            cout << endl ;
        }

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
