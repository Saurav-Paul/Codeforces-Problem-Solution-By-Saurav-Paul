
/**
 *    author        : Saurav Paul 
 *    created       : January 17, 2021 9:09 AM
 *    Problem Name  : B - Game of Robots
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/417942#problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll n , k ; cin >> n >> k ;

        vector<ll> vec(n) ;
        for(auto &x : vec){
            cin >> x;
        }

        ll base = 0 ;

        for(ll i = 1 ; ; i++){
            if( base + i < k){
                base += i ;
            }
            else {
                cout << vec[k-base - 1] << endl ;
                return ;
            }
        }
        assert(false) ;

    }
    
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    // cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
