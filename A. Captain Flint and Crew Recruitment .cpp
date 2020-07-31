
/**
 *    author        : Saurav Paul 
 *    created       : July 30, 2020 8:35 PM
 *    Problem Name  : A. Captain Flint and Crew Recruitment
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1388/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    int a = 6 , b = 10 , c = 14 ;

    int d = n - (a + b + c ) ;

    if(d == a || d == b || d == c){
        c += 1 ;
        d -- ;
    }

    if(d > 0){
        cout << "YES" << endl ;
        cout << a << " " << b << " " << c << " " << d << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
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
