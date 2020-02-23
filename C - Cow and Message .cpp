				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  string s ;
  cin >> s ;

  vector<long long int> v(26) ;
  vector< vector<long long int> > v2(26 , vector<long long int> (26)) ;
  int n = s.size() ;
  for(int i = 0 ; i < n ; i ++){
    int c = s[i] - 'a' ;

    for(int i = 0 ; i < 26 ; i++){
      v2[i][c] += v[i] ;
    }
    v[c] ++ ;
  } 
  long long int ans = 0 ;
  for(auto x : v) ans = max(ans, x) ;
  for(int i = 0; i < 26 ; i++){
    for(int j = 0 ; j < 26 ; j ++){
      ans = max(ans, v2[i][j]) ;
    }
  }
  cout << ans << endl ;
  return 0;
}
