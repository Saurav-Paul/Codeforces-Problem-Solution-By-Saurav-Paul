
/**
 *    author        : Saurav Paul 
 *    created       : August 25, 2020 9:33 PM
 *    Problem Name  : C. Binary String Reconstruction
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1400/problem/c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    string s ; cin >> s;
    int n = s.size() ;
    ll x ; cin >> x ;
    string o = string(n,'1') ;


    for(ll i = 0 ; i < n; i++){
        if(s[i] == '0'){
            if(i-x >= 0) o[i-x] = '0' ;
            if(i+x < n) o[i+x] = '0' ;
        }
    }

    bool ok = true ;

    for(ll i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            bool t = false ;
            if(i-x >= 0 && o[i-x]=='1') t = true ;
            if(i+x < n && o[i+x] == '1') t = true ;
            if(t == false){
                ok = false ;
                break ;
            }
        }
    }

    cout << (ok?o:"-1") << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
