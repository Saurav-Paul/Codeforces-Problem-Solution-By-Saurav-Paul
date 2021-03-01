
/**
 *    author        : Saurav Paul 
 *    created       : March 01, 2021 8:39 PM
 *    Problem Name  : A. K-th Largest Value
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1491/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
      ll n , q; 
      cin >> n >> q;

      ll zero = 0 , one = 0 ;

      vector<int> v(n+1) ;
      for(int i = 1 ; i <= n ; i++){
        cin >> v[i] ;

        if(v[i] == 0) zero ++ ;
        else if(v[i] == 1) one ++ ;
        else assert(false) ;
      }

      while(q--){
        ll t , x ;
        cin >> t >> x ;
        if(t == 1){
          v[x] ^= 1;
          if(v[x] == 1) one ++ , zero -- ;
          else zero ++ , one --;
        }
        else if(t == 2){
          if(one >= x){
            cout << 1 << endl ;
          }
          else{
            cout << 0 << endl ;
          }
        }
        else{
          assert(false) ;
        }
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
