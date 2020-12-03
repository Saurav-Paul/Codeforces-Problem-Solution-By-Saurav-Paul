
/**
 *    author        : Saurav Paul 
 *    created       : November 08, 2020 9:06 AM
 *    Problem Name  : A - Good Number
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/365/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , k ;
        cin >> n >> k ;
        int cnt = 0 ;

        for(int i = 0 ;i < n; i++){
            bool dig[10] = {} ;

            string s ; cin >> s ;
            for(auto c : s){
                dig[c-'0'] = true ;
            }

            bool ok = true ;
            for(int j = 0 ; j <= k ; j++){
                if(dig[j] == false){
                    ok = false ;
                    break ;
                }
            }
            if(ok)
                cnt ++ ;
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
