
/**
 *    author:  Saurav Paul 
 *    created: June 21, 2020 11:08 AM
 *    Problem Name : A. C+=
 *    Problem Url : https://codeforces.com/problemset/problem/1368/A
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a , b, n;
    cin >> a >> b >> n;
    int cnt = 0 ;
    while(max(a,b) <= n ){
        if(a < b){
            a += b;
        }
        else {
            b += a;
        }
        cnt ++ ;
    }
    cout << cnt << endl ;

}

int main(){

    int n; cin >> n;
    while(n--){
        solve() ;
    }

    return 0;
}
