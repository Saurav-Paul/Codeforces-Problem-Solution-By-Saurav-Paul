
/**
 *    author        : Saurav Paul 
 *    created       : September 15, 2020 10:19 PM
 *    Problem Name  : C. Game with Chips
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1327/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N , M , K ;
    public :
    void solve(){

        cin >> N >> M >> K ;

        for(int i = 0 ; i < 2*K ; i++){
            int dummy_x , dummy_y ;
            cin >> dummy_x >> dummy_y ;
        }
        string ans ="" ;

        int cnt = 0 ;
        for(int i = 1; i < N ; i++){
            ans += 'U' ;
            cnt += 1 ;
        }

        for(int i = 1 ; i < M ; i++){
            ans += 'L' ;
            cnt ++ ;
        }

        for(int i = 1 ; i <= N ; i++){
            for(int j = 1 ; j < M ; j++){
                if(i&1) ans += 'R' ;
                else ans += 'L' ;
                cnt ++ ;
            }
            if(i == N) continue ;
            ans +='D' ;
            cnt ++ ;
        }

        cout << cnt << endl ;
        cout << ans << endl ;

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
