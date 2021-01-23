
/**
 *    author        : Saurav Paul 
 *    created       : November 30, 2020 8:44 AM
 *    Problem Name  : B - Fedor and New Game
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/467/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;



class TC{

    public :
    void solve(){
        int n , m , k ;
        cin >> n >> m >> k ;

        vector<int> players(m) ;
        for(auto &x : players){
            cin >> x ;
        }

        int fedor ; cin >> fedor ; 
        int cnt = 0 ;

        for(int i = 0 ; i < m ; i++){
            int dif = 0 ;
            int curr = players[i] ;
            for(int bit = 0 ; bit < n ; bit++){
                int a = (curr & (1 << bit)) ;
                int b = (fedor & (1 << bit)) ;

                if(a!=b) ++dif ;
            }

            if(dif <= k) cnt ++ ;
        }

        cout << cnt << endl ;


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
