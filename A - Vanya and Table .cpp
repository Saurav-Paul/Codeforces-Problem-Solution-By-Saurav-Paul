
/**
 *    author        : Saurav Paul 
 *    created       : December 12, 2020 8:45 PM
 *    Problem Name  : A - Vanya and Table
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/552/A
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
        while(n--){
            int a , b , c, d;
            cin >> a >> b >> c >> d;
            cnt += (abs(a-c)+1) * (abs(b-d)+1) ;
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
