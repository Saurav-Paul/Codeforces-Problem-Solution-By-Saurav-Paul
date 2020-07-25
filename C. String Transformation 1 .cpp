
/**
 *    author        : Saurav Paul 
 *    created       : July 24, 2020 9:09 PM
 *    Problem Name  : C. String Transformation 1
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1384/problem/C
**/

#include<bits/stdc++.h>
using namespace std;

int lim = 20 ;

void dfs(int x , vector< vector<int> > &graph  , bool rem[]) {

      rem[x] = true ;

      for(auto node : graph[x]){
        if(rem[node] == false)
          dfs(node,graph,rem) ;
      }
}

void solve(){
    int n ;
    string a , b;
    cin >> n ;
    cin >> a >> b ;

    for(int i = 0 ; i < n ; i++){
        if(a[i] > b[i]){
            cout << -1 << endl ;
            return ;
        }
    }

    vector< vector <int >  > graph(lim , vector<int> ()) ;
    
    for(int i = 0 ; i < n ; i++) {
      int x = a[i] - 'a' ;
      int y = b[i] - 'a' ;

      graph[x].emplace_back(y) ;
      graph[y].emplace_back(x) ;

    }

    bool rem[lim] = {} ;

    int ans = lim ;

    for(int i = 0 ; i < lim ; i++){

      if(rem[i] == false){
        dfs(i,graph,rem) ;
        ans -- ;
      }

    }

    cout << ans << endl ;

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
