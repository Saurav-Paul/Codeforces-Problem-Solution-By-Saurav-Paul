/**
 *    author        : Saurav Paul 
 *    created       : March 03, 2021 9:52 PM
 *    Problem Name  : A. ABC String
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1494/problem/A
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
 
void solve(){
    string s ; cin >> s;
 
    if(s[0] == s[s.size()-1]){
        cout << "NO" << endl ;
        return ;
    }
 
    char first = s[0] , last = s[s.size() - 1] ;
    for(auto &x : s){
        if(x == first){
            x = '(' ;
        }
        if(x == last){
            x = ')' ;
        }
    }
 
    for(auto curr : {'(', ')'}){
        string new_value = s; 
        for(auto &x : new_value){
            if(x != '(' and x != ')'){
                x = curr ;
            }
        }
        bool ok = true ;
        int cnt = 0 ;
 
        for(auto x : new_value){
            if(x == '(') cnt ++ ;
            else if(x == ')') cnt -- ;
 
            if(cnt < 0){
                ok = false ;
                break ;
            }
        }
        if(cnt != 0){
            ok = false ;
        }
 
        if(ok){
            cout << "YES" << endl ;
            return ;
        }
 
    }
 
    cout << "NO" << endl ;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    int t ; cin >> t ;
 
    while(t--){
        solve() ;
    }
 
    return 0 ;
}
