
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 10:14 PM
 *    Problem Name  : C. Good String
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1389/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size() ;
    int ans = min(2,n) ;

    vector<int> cnt(10) ;

    for(auto x : s){
        cnt[x-'0']  ++ ;
    }

    for(auto x : cnt){
        ans = max(ans, x) ;
    }


    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            int pcnt = 0 ;
            for(auto x : s){
                if((pcnt&1)){
                    if(x == i+'0')
                        pcnt ++ ;
                }
                else{
                    if( x == j+'0' )
                        pcnt ++ ;
                }
            }
            if(pcnt&1)
                pcnt -- ;
            ans = max(pcnt, ans) ;
        }
    }

    cout << n - ans << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
