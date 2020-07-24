
/**
 *    author        : Saurav Paul 
 *    created       : July 23, 2020 10:15 PM
 *    Problem Name  : A. Acacius and String
 *    Problem Limit : 1000 ms , 512 MB
 *    Problem Url   : https://codeforces.com/contest/1379/problem/A
**/

#include<bits/stdc++.h>
using namespace std;

string desire = "abacaba" ;
int len = desire.size() ;

int is_ok(string &s){
    int cnt = 0 , n = s.size() ;

    for(int i = 0 ; i < n ; i ++){
        int pos = 0 ;

        for(int j = i ; j < n ; j++){
            if(pos == len){
                break ;
            }
            if(desire[pos] == s[j]){
                pos ++ ;
            }
            else{
                break ;
            }
        }
        if( pos == len ){
            ++ cnt;
        }
    }

    return cnt ;
}

void solve(){
    int n;
    cin >> n;
    string s ; cin >> s;

    int cnt = is_ok(s) ;

    if(cnt < 2){

        for(int i = 0 ; i < n; i++){
            if(cnt == 0){

                int pos = 0; 
                string temp = s ;
                for(int j = i ; j < n ; j++){
                    
                    if(pos == len){
                        break ;
                    }
                    if(desire[pos] == temp[j] or temp[j] == '?'){

                        if(temp[j] == '?'){
                            temp[j] = desire[pos] ;
                        }
                        pos ++ ;

                    }
                    else{
                        break ;
                    }
                    
                }
                if(pos == len){
                    int x = is_ok(temp) ;
                    if(x == 1){
                        cnt = x;
                        s = temp ;
                        break ;
                    }
                }

            }
            else if(cnt == 1){
                break ;
            }
            else
                assert(false) ;
        }

    }

    if(cnt == 1){
        for(int k = 0 ; k  < n; k++){
            if(s[k] == '?'){
                s[k] = 'd' ;
            }
        }
        cout << "Yes" << endl ;
        cout << s << endl ;
    }
    else{
        cout << "No" << endl ;
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
