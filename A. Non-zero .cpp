
/**
 *    author        : Saurav Paul 
 *    created       : September 03, 2020 9:01 PM
 *    Problem Name  : A. Non-zero
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1300/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N , zero = 0, sum = 0, ans = 0;
    public :
    void solve(){

        cin >> N ;
        for(int i = 0 ; i < N ; i++){
            int x ;
            cin >> x;
            sum += x;
            if(!x) zero ++ ;
        }

        if(zero) ans = zero , sum += zero ;
        if(!sum) ans ++ ;

        cout << ans << endl ;


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
