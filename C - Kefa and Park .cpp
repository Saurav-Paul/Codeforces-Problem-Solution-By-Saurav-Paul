
/**
 *    author        : Saurav Paul 
 *    created       : February 07, 2021 9:27 AM
 *    Problem Name  : C - Kefa and Park
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int n , m ; 
    vector<int> is_cat ;
    vector<vector<int>> graph ;
    public :
    void solve(){
        cin >> n >> m ;
        is_cat = vector<int>(n+1) ;
        graph = vector<vector<int>>(n+1,vector<int>()) ;
        for(int i = 0 ;i  < n ; i++){
            cin >> is_cat[i+1] ;
        }

        for(int i = 1; i < n ; i++){
            int u , v; cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u) ;
        }

        cout << count_rest(1 , -1 , 0) << endl ;

    }

    int count_rest(int node , int parent , int cons){
        if(is_cat[node] == 1)
            cons += is_cat[node] ;
        else cons = 0 ;
        
        if(cons > m) return 0 ;

        bool leaf = true ;
        int total = 0 ;

        for(auto nxt : graph[node]){
            if(nxt == parent) continue ;
            leaf = false ;
            total += count_rest(nxt , node , cons) ;
        }

        if(leaf) return 1 ;
        return total ;
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
