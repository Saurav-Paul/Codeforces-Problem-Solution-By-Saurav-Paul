  
/**
 *    author        : Saurav Paul 
 *    created       : April 21, 2021 7:41 PM
 *    Problem Name  : B. AGAGA XOOORRR
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1516/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;
        vector<ll> v(n) ;
        bool ok = false ;

        for(auto &x : v) cin >> x ;

        ll XOR = 0 ;

        for(int i = 0 ; i < n - 1 ; i++){
            XOR ^= v[i] ;
            ll checker = 0 ;
            int cnt = 0 ;
            for(int j = i + 1; j < n ; j++){
                if(v[j] == 0) continue ;
                if(checker == XOR){
                    checker = 0 ;
                    ++ cnt ;
                }
                checker ^= v[j] ;
            }
            if(checker == XOR){
                ok = true ;
                break ;
            }
            else if(cnt > 0 and checker == 0){
                ok = true;
                break ;
            }
        }

        cout << (ok?"YES ":"NO") << endl ;
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
