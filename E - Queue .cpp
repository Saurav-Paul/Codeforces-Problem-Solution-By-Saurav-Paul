
/**
 *    author        : Saurav Paul 
 *    created       : December 14, 2020 9:35 AM
 *    Problem Name  : E - Queue
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    ll n ;
    vector<ll> t ;
    public :
    void solve(){

        cin >> n ;
        for(int i= 0 ; i < n ;i ++){
            ll x ; cin >> x ;
            t.push_back(x) ;
        }

        sort(t.begin(),t.end()) ;

        ll happy = 0 , wait = 0 ;

        for(auto x : t){
            if(wait <= x){
                happy ++ ;
                wait += x ;
            }
        }

        cout << happy << endl ;

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
