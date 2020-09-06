
/**
 *    author        : Saurav Paul 
 *    created       : September 06, 2020 9:47 AM
 *    Problem Name  : C - Little Pony and Sort by Shift
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/393057#problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
const int INF = 1e9 + 90 ;

class TC{

    int N ;
    vector<int>v  ;
    public :
    void solve(){

        cin >> N ;
        v.assign(N,0) ;

        for(auto &x : v){
            cin >> x;
        }

        int cnt = 0 , pos = N , mn = INF , temp = INF ;
        for(int i = 0 , prv = 0 ; i < N ; i++){
            int num = v[i] ;

            if(num < prv){
                cnt ++ ;
                pos = i ;
                temp = mn ;
            }

            if(num > temp) cnt ++ ;
            mn = min(mn,num) ;
            prv = num ;
        }

        cout << (cnt> 1?-1 : N - pos) << endl ;

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
