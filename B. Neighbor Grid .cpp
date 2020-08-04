
/**
 *    author        : Saurav Paul 
 *    created       : August 04, 2020 1:38 PM
 *    Problem Name  : B. Neighbor Grid
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1375/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m;
    cin >> n >> m;
    bool ok = true ;
    vector<vector<int>>v(n+1,vector<int>(m+1)) ;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j<= m ; j++){
            cin >> v[i][j] ;

            if((i == 1 && j == 1) or (i == 1 && j == m) or (i == n && j == 1) or (i == n && j == m)){
                if(v[i][j] > 2) ok = false ;
                else v[i][j] = 2 ;
            }
            else if( (i == 1 or i == n) or (j == 1 or j == m) ){
                if(v[i][j] > 3) ok = false ;
                else v[i][j] = 3 ;
            }
            else{
                if(v[i][j] > 4) ok = false ;
                else v[i][j] = 4 ;
            }
        }
    }

    if(ok){
        cout << "YES" << endl ;
        for(int i = 1; i <= n ;i++){
            for(int j = 1; j <= m ; j++){
                cout << v[i][j] <<" " ;
            }
            cout << endl ;
        }
    }
    else{
        cout << "NO" << endl ;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
