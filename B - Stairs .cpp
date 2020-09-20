
/**
 *    author        : Saurav-Paul 
 *    created       : September 20, 2020 9:05 AM
 *    Problem Name  : B - Stairs
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/1419/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll x ;
        cin >> x ;
        ll cnt = 0 ;

        ll curr = 1, even = 2 ;
        ll rem = 1; 
        ll step = 1 ;
        while(curr <= x){
            cnt ++ ;

            step += even ;
            even *= 2;

            ll temp = step * (step + 1) ;
            temp /=2 ;

            curr += temp ;

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
