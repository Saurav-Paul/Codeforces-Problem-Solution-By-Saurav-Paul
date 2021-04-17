/**
 *    author        : Saurav Paul 
 *    created       : April 10, 2021 8:53 PM
 *    Problem Name  : C. A-B Palindrome
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1512/problem/C
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
 
class TC{
 
    public :
    void solve(){
        int a , b ; cin >> a >> b ;
        string s ; cin >> s ;

        for(char c : s){
            if(c == '1') --b ;
            else if(c == '0') --a ;
        }
        if( a < 0 or b < 0){
            cout << -1 << endl ;
            return ;
        }

        for(int i = 0 , j = (int)s.size() - 1 ; i < j ; i++ , j--){
            if(s[i] == '?' and s[j] == '?')
                continue ;
 
            if(s[i] != '?' and s[j] != '?')
                continue ;
            
 
            if( s[i] == '1' or s[j] == '1'){
                --b;
                s[i] = s[j] = '1' ;
            }
            else if( s[i] == '0' or s[j] == '0'){
                --a;
                s[i] = s[j] = '0' ;
            }
            if( a < 0 or b < 0){
                cout << -1 << endl ;
                return ;
            }
        }

        for(int i = 0 , j = (int)s.size() - 1 ; i <= j ; i++ , j--){
            if(i == j){
                if(s[i] == '?'){
                    if( a > 0){
                        s[i] = '0' ;
                        -- a;
                    }
                    else if( b > 0){
                        s[i] = '1' ;
                        -- b ;
                    }
                    else{
                        cout << -1 << endl ;
                        return ;
                    }
                }
                break ;
            }
            if( s[i] == '?' and s[j] == '?'){
                if(a > 1){
                    a -= 2 ;
                    s[i] = s[j] = '0' ;
                }
                else if( b > 1){
                    b -= 2;
                    s[i] = s[j] = '1' ;
                }
                else{
                    cout << -1 << endl ;
                    return ;
                }
            }
 
        }
 
        for(int i = 0 , j = (int)s.size() - 1 ; i < j ; i++ , j--){
            if( s[i] != s[j] ){
                cout << -1 << endl ;
                return ;
            }
        }        
 
        cout << s << endl ;
    }
};
 
int main(){
    ios_base::sync_with_stdio(false);
 
    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }
 
    return 0 ;
}
