  
/**
 *    author        : Saurav Paul 
 *    created       : 08/05/2021 23:26:21
 *    Problem Name  : A. Red and Blue Beans
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1519/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll r , b , d;
        cin >> r >> b >> d;
        ll differ = abs(r - b) ;
        ll mn = min(r , b) ;
        ll each = ( differ + mn - 1) / mn ;
        if(each <= d) cout << "YES" << endl;
        else cout << "NO" << endl ;
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
