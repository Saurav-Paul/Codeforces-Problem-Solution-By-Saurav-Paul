
/**
 *    author        : Saurav Paul 
 *    created       : August 30, 2020 8:43 PM
 *    Problem Name  : B. Power Sequence
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1397/problem/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    ll N , lst;
    vector<ll> v , got;

    public :
    void solve(){
    
      scanf("%lld",&N) ;
      v.assign(N,0) ;

      for(auto &x : v){
          scanf("%lld",&x) ;
      }
      sort(v.begin(),v.end()) ;

      lst = v[N-1] ;

      ll low = -1 , high = 0 , lx , hx ;
      if(N > 32){
        low = 1 , high = 2 ;
        if(N > 50){
          high = 1;
        }
      }
      else{
        for(ll i = 0 ; i < 100000  ; i++){
            ll x = pow(i,N-1) ;
            if(x >= lst){
                if(low == -1) low = high ;
                high = i ;
                hx = x;
                break ;
            }
            low = i ;
            lx = x ;
        }
      }

      ll ans1 = 0 , ans2 = 0 ;

      for(ll i = 0 ; i < N ;i++){
          ll x = pow(low,i) ;
          ll y = pow(high,i) ;

          ans1 += abs(x-v[i]) ;
          ans2 += abs(y-v[i]) ;
      }

      printf("%lld\n",min(ans1,ans2)) ;

    }
};

int main(){

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
