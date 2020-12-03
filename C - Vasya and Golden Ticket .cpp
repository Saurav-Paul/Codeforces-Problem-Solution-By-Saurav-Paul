
/**
 *    author        : Saurav Paul 
 *    created       : November 08, 2020 9:24 AM
 *    Problem Name  : C - Vasya and Golden Ticket
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1030/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; 
        cin >> n ;
        string s ; cin >> s;
        int sum = 0 ;

        for(auto c : s) sum += (c-'0') ;

        for(int i = 0 ; i <= sum ; i++){
            
            int cnt = 0 , temp = 0 ;

            for(auto c : s){
                temp += c-'0' ;
                if (temp == i){
                    cnt ++ ;
                    temp = 0 ;
                }
            }
            if(temp == 0 && cnt > 1){
                cout <<"YES" << endl ;
                return ;
            }
        }
        cout <<"NO" << endl ;
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
