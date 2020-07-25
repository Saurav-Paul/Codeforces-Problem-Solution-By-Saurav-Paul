

/**
 *    author        : Saurav Paul 
 *    created       : July 24, 2020 8:35 PM
 *    Problem Name  : A. Common Prefixes
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1384/problem/A
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int > v(n) ;
    int mx = 0 ;

    for(auto &x : v){
        cin >> x;
        mx = max(x,mx) ;
    }
    string s = "" ;

    for(int i = 0 ; i < mx+3 ; i++){
        s +='a' ;
    }

    cout <<  s << endl ;
    
    for(int i = 0 ; i < n ; i++){

        int pos = v[i] ;

        s[pos] = (s[pos]=='y'?'x' : 'y') ;
        
        cout << s << endl ;

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
