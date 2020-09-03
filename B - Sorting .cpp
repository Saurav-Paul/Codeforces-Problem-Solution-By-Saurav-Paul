
/**
 *    author        : Saurav Paul 
 *    created       : August 31, 2020 9:38 AM
 *    Problem Name  : B - Sorting
 *    Problem Limit : 500 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/205/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N ;
        vector<ll> v(N) ;
        for(auto &x : v){
            cin >> x;
        }

        ll ans = 0 ;
        for(int i = 1; i < N ; i++){
            if(v[i]  < v[i-1]){
                ans += (v[i-1]-v[i]) ;
            }
        }
        cout << ans << endl ;

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
