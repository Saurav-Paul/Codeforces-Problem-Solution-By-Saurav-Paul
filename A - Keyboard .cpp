
/**
 *    author        : Saurav Paul 
 *    created       : November 30, 2020 8:30 AM
 *    Problem Name  : A - Keyboard
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/474/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{
    
    vector<string> line= { "qwertyuiop","asdfghjkl;","zxcvbnm,./" } ;

    public :
    void solve(){
        char c ; cin >> c ;

        string s , t ; cin >> s ;

        for(auto x : s){
            bool ok = false ;
            for(int i = 0 ; i < 3 ; i++){

                for(int j = 0 ; j < line[i].size() ; j ++){
                    char now = line[i][j] ;
                    if(now == x){
                        ok = true ;
                        if(c == 'L'){
                            t += line[i][j+1] ;
                        }
                        else if(c == 'R'){
                            t += line[i][j-1] ;

                        }
                        else assert(false) ;

                        break ;
                    }
                }
                if(ok) break ;

            }
            if(!ok) assert(false) ;
        }

        cout << t <<  endl ; 


    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
