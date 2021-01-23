/**
 *    author        : Saurav Paul 
 *    created       : December 13, 2020 4:14 PM
 *    Problem Name  : C - Vanya and Books
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/552/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n ;

        int noDigit = number_of_digit(n) ;
        long long ans = 0 , curr = 9 , last = 0 ;

        for(int i = 1 ; i < noDigit; i++){
            last += curr ;
            curr = curr * 10 + 9 ;
        }

        ans = (long long)noDigit * n - last ;
        cout << ans << endl ; 


    }

    int number_of_digit(int n){
        int cnt = 0 ;
        while(n){
            ++cnt ;
            n /= 10 ;
        }
        return cnt ;
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
