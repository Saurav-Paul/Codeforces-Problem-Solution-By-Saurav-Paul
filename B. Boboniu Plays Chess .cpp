
/**
 *    author        : Saurav Paul 
 *    created       : August 12, 2020 8:36 PM
 *    Problem Name  : B. Boboniu Plays Chess
 *    Problem Limit : 1000 ms , 512 MB
 *    Problem Url   : https://codeforces.com/contest/1395/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
vector<vector<int>>grid(1,vector<int>(1)) ;
ll n , m , x , y ;

bool check(int i , int j){
    if(i < 1 || i > n) return false ;
    if(j < 1 || j > m) return false ;
    if(grid[i][j] == 1) return false ;
    return true ;
};

bool ok = true ;

void solve(){

    ok = false ;
    cin >> n >> m >> x >> y ;

    grid = vector<vector<int>>(n+1,vector<int>(m+1)) ;


    vector<pair<ll,ll>> ans ;

    for(int i = x, j = y ; ; ){
        if(grid[i][j]) break ;
        ans.push_back(make_pair(i,j)) ;
        grid[i][j] = 1 ;

        for(int k = j+1 ; k <= m ; k++){
            if(check(i,k)){
                ans.push_back(make_pair(i,k)) ;
                grid[i][k] = 1 ;
                j = k ;
            }
        }
        for(int k = j-1 ; k > 0 ; k--){
            if(check(i,k)){
                ans.push_back(make_pair(i,k)) ;
                grid[i][k] = 1 ;
                j = k ;
            }
        }

        for(int k = 1 ; k <= n ;k++){
            if(grid[k][j] == 0){
                i = k ;
                break ;
            }
        }

    }

    assert(ans.size() == (n*m)) ;

    for(auto x : ans){
        cout << x.first << " " << x.second  << endl ;
    }

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    testcase = 1 ;
    for(int i = 1 ; i <= testcase ; i ++){
        solve();
    }

    return 0 ;
}
