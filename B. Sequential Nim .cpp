
/**
 *    author        : Saurav Paul 
 *    created       : July 22, 2020 12:05 PM
 *    Problem Name  : B. Sequential Nim
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1382/problem/B
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector <int> v(n) ;
    int ones = 0 ;

    for(auto &x : v){
        cin >> x ;
        if(x == 1)
            ones ++ ;
    }
    if(n == 1 or ones == 0){
        cout << "First" << endl ;
        return ;
    }
    if (ones == n ){
        cout << (n&1?"First":"Second" ) << endl ;
        return ;
    }

    bool first = false;
    for(int i = 0 ; i < n; i++){
        if(v[i] == 1){
            first ^= 1 ;
        }
        else{
            break ;
        }
    }
    cout << (first?"Second" : "First") << endl ;

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

/*
7
3
2 5 4
8
1 1 1 1 1 1 1 1
6
1 2 3 4 5 6
6
1 1 2 1 2 2
1
1000000000
5
1 2 2 1 1
3
1 1 1
*/
