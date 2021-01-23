
/**
 *    author        : Saurav Paul 
 *    created       : December 21, 2020 9:09 AM
 *    Problem Name  : B - Making a String
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

        vector<ll> v(n) ;
        for(auto &x : v) cin >> x ;

        sort(v.begin(), v.end() , greater<ll>()) ;

        ll cnt = 0 ;
        map<ll , int> rem ;

        for(int i = 0 ; i < n ; i++){
            ll x = v[i] ;
            while(rem[x] != 0){
                x -- ;
            }
            if(x > 0){
                cnt += x ;
                rem[x] = 1;
            }
        }
        cout << cnt << endl ;

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
