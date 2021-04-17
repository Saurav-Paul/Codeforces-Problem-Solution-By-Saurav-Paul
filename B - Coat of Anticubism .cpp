
/**
 *    author        : Saurav Paul 
 *    created       : January 24, 2021 9:53 AM
 *    Problem Name  : B - Coat of Anticubism
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;
        ll sum = 0 ;
        vector<ll> v(n) ;
        for(auto &x : v){
            cin >> x ;
        }
        sort(v.begin(), v.end()) ;
        for(int i = 0 ; i < n - 1 ; i ++){
            sum += v[i] ;
        }

        cout << v[n-1] - sum + 1 << endl ;

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
