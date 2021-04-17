  
/**
 *    author        : Saurav Paul 
 *    created       : April 12, 2021 8:39 PM
 *    Problem Name  : A. Review Site
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1511/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;
        int cnt = 0 ;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            if(x != 2){
                ++ cnt ;
            }
        }
        cout << cnt << endl ;
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
