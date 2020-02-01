				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

  string s , t;
  cin >> s >> t;
  vector< vector<int> > alpha(30 , vector<int> ()) ;
  int i = 0 ;

  for(auto x : s){
    alpha[(x-'a')].emplace_back(i++) ;
  }

  for(auto x : t){
    if(alpha[x-'a'].size() == 0){
      cout << -1 << endl ;
      return ;
    }
  }

  int last = -1 , cnt = 1 ;
  for(auto x : t){
    int c = x - 'a' ;
    int ind = upper_bound(alpha[c].begin(),alpha[c].end(), last) - alpha[c].begin() ;
    if(ind != alpha[c].size()){
      last = alpha[c][ind] ;
    }
    else{
      ++cnt ;
      last = -1 ;
      int ind = upper_bound(alpha[c].begin(),alpha[c].end(), last) - alpha[c].begin() ;
      last = alpha[c][ind] ;
    }

  }
  cout << cnt << endl ;
}
int main(){
  
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
      solve();
    }

    return 0;
}
