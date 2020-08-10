
/**
 *    author        : Saurav Paul 
 *    created       : August 09, 2020 8:58 PM
 *    Problem Name  : C. Cyclic Permutations
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1391/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    long long n ;
    long long mod = 1e9 + 7 ;

    cin >> n ;

    long long power = 1 ;
    for(int i = 1 ; i < n; i++){
        power *= 2 ;
        power %= mod ;
    }

    long long fact = 1 ;

    for(int i = 1 ; i <= n ; i++){
        fact *= i ;
        fact %= mod ;
    }
    long long ans  = (fact - power + mod) % mod ;
    cout << ans << endl;

    return 0 ;
}
