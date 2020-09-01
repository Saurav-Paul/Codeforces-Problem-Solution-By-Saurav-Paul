
/**
 *    author        : Saurav Paul 
 *    created       : September 01, 2020 11:42 AM
 *    Problem Name  : D. Stoned Game
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1397/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N, sum = 0 , mx = 0;
        cin >> N ;
        for(int i = 0 ; i < N ; i++){
            int x;
            cin >> x;
            sum += x;
            mx = max(mx,x) ;
        }

        cout << (sum&1 || mx > sum-mx?"T":"HL") << endl ;
        
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
