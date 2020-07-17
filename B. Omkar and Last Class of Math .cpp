
/**
 *    author        : Saurav Paul 
 *    created       : July 17, 2020 8:19 PM
 *    Problem Name  : B. Omkar and Last Class of Math
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1372/problem/B
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n, lim;
    cin >> n;
    long long x = 1 , y = n - 1 ; 

    for(long long i = 2 ; i * i <= n ; i++){
        if( n%i == 0 ) {
            x = max(x, max(i,n/i)) ;
            y = n - x ;
        }

    }
    cout << x << " " << y << endl ;
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
