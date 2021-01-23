
/**
 *    author        : Saurav Paul 
 *    created       : November 30, 2020 9:09 AM
 *    Problem Name  : C - Worms
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/474/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){

        int n ; cin >> n ;
        vector<int> v ;
        bool first = true ;
        for(int i = 0 ; i < n; i++){
            int x ; 
            cin >> x ;
            if(!first) x += v.back() ;
            v.emplace_back(x) ;
            first = false ;
        }


        int q ; cin >> q ;
        for(int i = 0 ; i < q; i++){
            int val  ; cin >> val ;

            auto no = lower_bound(v.begin(), v.end() , val) - v.begin(); 

            cout << no + 1 << endl ;
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
