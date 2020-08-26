
/**
 *    author        : Saurav Paul 
 *    created       : August 21, 2020 8:35 PM
 *    Problem Name  : A. Distance and Axis
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1401/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){

    ll a , k ;
    cin >> a >> k ;

    if(a == k){
        cout << 0 << endl ;
    }
    else if( a > k ){
        if( (a&1) == (k&1) ) cout << 0 << endl ;
        else cout << 1 << endl ;
    }
    else{
        cout << abs(a-k) << endl ;
    }

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
