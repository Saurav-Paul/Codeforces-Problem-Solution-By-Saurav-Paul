
/**
 *    author        : Saurav Paul 
 *    created       : July 31, 2020 8:27 PM
 *    Problem Name  : D. Captain Flint and Treasure
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1388/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n ;
    cin >> n ;
    vector<long long> a(n+1), b(n+1) , vis(n+1);

    for(int i = 1; i<= n ; i++) cin >> a[i] ;
    for(int i = 1; i<= n ; i++) cin >> b[i] ;

    vector< vector<int> > graph(n+1 , vector<int> ()) ;

    for(int i = 1 ; i<= n ; i++) {
        if(b[i] != -1){
            graph[b[i]].emplace_back(i) ;
        }
    }

    vector<int> v , after , vans ;
    long long ans = 0 ;
    function<void(int)> dfs = [&](int node){

        vis[node] = 1 ;
        for(auto x : graph[node]){
            if(vis[x] == 0)
                dfs(x) ;
        }

        ans += a[node] ;
        if(a[node] > 0 && b[node] != -1){
            a[b[node]] += a[node] ;
        }

        if(a[node] > 0) v.emplace_back(node) ;
        else after.emplace_back(node) ;

    } ;

    for(int i = 1; i <= n; i++){
        if(vis[i] == 0)
            dfs(i) ;
    }
    cout << ans << endl ;

    vans = v ;
    reverse(after.begin() , after.end()) ;
    for(auto x : after) vans.emplace_back(x) ;
    
    for(auto x : vans) cout << x << " " ;
    cout << endl ;
    return 0 ;
}
