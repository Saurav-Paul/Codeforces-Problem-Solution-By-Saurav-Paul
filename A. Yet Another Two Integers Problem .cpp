
/**
 *    author        : Saurav Paul 
 *    created       : September 04, 2020 8:36 PM
 *    Problem Name  : A. Yet Another Two Integers Problem
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N , M ;
        cin >> N >> M ;
        N = abs(N-M) ;
        N = (N+9)/10 ;
        cout << N << endl ;

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
