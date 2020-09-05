
/**
 *    author        : Saurav Paul 
 *    created       : September 05, 2020 9:04 AM
 *    Problem Name  : F. Subsequences of Length Two
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/F
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

const int nax = 205 ;
long long dp[nax][nax][nax] ;

class TC{

    long long N , K ;
    string s, t ;

    public :
    void solve(){

        cin >> N >> K ;
        cin >> s >> t ;

        if(t[0] == t[1]){

            long long cnt = 0 ;
            for(auto x : s){
                if(x == t[0]) cnt ++ ;
            }

            cnt += min(K,N-cnt) ;

            cnt = (cnt - 1) * cnt ;
            cnt /= 2;
            
            cout << cnt << endl ;

            return ;
        }

        memset(dp,-1,sizeof dp) ;
        cout << cal(0,0,K) << endl ;

    }

    long long cal(int pos , int total_t0 , int k){
        if(pos >= N) return 0LL ;
        if(dp[pos][total_t0][k] != -1) return dp[pos][total_t0][k] ;

        long long ans = cal(pos+1,total_t0,k) ;

        int cost = (s[pos] != t[0] ? 1 : 0) ; 
        if(cost <= k){
            ans = max(ans, cal(pos+1,total_t0+1, k - cost)) ;
        }

        cost = (s[pos] != t[1] ? 1 : 0) ;

        if(cost <= k){
            ans = max(ans, total_t0 + cal(pos+1,total_t0, k - cost)) ;
        }

        return dp[pos][total_t0][k] = ans ;

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
