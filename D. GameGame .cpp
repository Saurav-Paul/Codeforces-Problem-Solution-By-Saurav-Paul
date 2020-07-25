
/**
 *    author        : Saurav Paul 
 *    created       : July 25, 2020 4:24 PM
 *    Problem Name  : D. GameGame
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1384/problem/D
**/

#include<bits/stdc++.h>
using namespace std;

void divide_into_bits(int n , vector<int>&bits){

    int i = 0 ;
    while(n){
        bits[i++] += (n%2) ;
        n /= 2 ;
    }

    if(i > 32 )
        assert(false) ;
}

void solve(){
    int n ;
    cin >> n;

    vector<int> bits(32) ;

    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x;

        divide_into_bits(x,bits) ;
    }

    for(int i = 31 ; i >= 0 ; i--){

        if(bits[i]&1){

            if(bits[i]%4 == 3 and (n-bits[i])%2 == 0){
                cout << "LOSE" << endl ;
            }
            else{
                cout << "WIN" << endl ;
            }
            return ;

        }
    }

    cout << "DRAW" << endl ;


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
