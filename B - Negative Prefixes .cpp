
/**
 *    author        : Saurav-Paul 
 *    created       : September 27, 2020 9:18 AM
 *    Problem Name  : B - Negative Prefixes
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1418/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
         int n ; cin >> n ;
         vector<int> v(n), unlocked(n);
         vector<int> bad_ase ;

         for(int i = 0 ; i < n; i++) cin >> v[i] ;
         for(int i = 0 ; i < n; i++){
             cin >> unlocked[i] ;
             if(unlocked[i] == 0){
                 bad_ase.push_back(v[i]) ;
                 v[i] = 0 ;
             }
         }
         sort(bad_ase.rbegin(),bad_ase.rend()) ;

         int pos = 0 ;
         for(int i = 0 ; i < n ; i++){
             if(unlocked[i] == 0){
                 v[i] = bad_ase[pos] ;
                 pos ++ ;
             }
         }

         for(auto x : v) cout << x << " " ;
         cout << endl ;


    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
