
/**
 *    author        : Saurav Paul 
 *    created       : July 30, 2020 9:14 PM
 *    Problem Name  : C. Uncle Bogdan and Country Happiness
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1388/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

vector<int>h , p ;
vector< vector <int >  > graph(1, vector<int>()) ;
bool ok = false ;

bool check(int temp ,int sg ,int gm ,int tp) {

  bool is_ok = true ;
  if(temp&1) is_ok = false ;
  if(sg > gm) is_ok = false ;
  if(gm < 0 || gm > tp) is_ok = false  ;
  return is_ok ;

}

pair<int,int> dfs(int node , int parent){

  int total_people = p[node] ;
  int sum_good_mode = 0 ;

  pair<int,int> t ;
  for(auto to : graph[node]){
    if(to == parent)
      continue ;

    t = dfs(to, node) ;
    total_people += t.first ;
    sum_good_mode += t.second ;

  }

  int temp = total_people + h[node] ;
  int good_mode = temp/2 ;
  ok = check(temp,sum_good_mode,good_mode,total_people)&ok ;
  return make_pair(total_people,good_mode) ;
}


void solve(){

    int n , m ;
    cin >> n >> m ;

    ok = true ;

    h = vector<int>(n+1) ;
    p = vector<int>(n+1) ;

    graph = vector< vector<int> > (n+1, vector<int>()) ;

    for(int i = 1 ; i <= n; i++) cin >> p[i] ;
    for(int i = 1 ; i <= n; i++) cin >> h[i] ;

    for(int i = 1; i < n; i++){
      int u , v;
      cin >> u >> v;

      graph[u].emplace_back(v) ;
      graph[v].emplace_back(u) ;

    }

    dfs(1 , 0) ;

    cout << (ok?"YES" : "NO") << endl ;

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
