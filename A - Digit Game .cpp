
/**
 *    author        : Saurav-Paul 
 *    created       : September 20, 2020 9:00 AM
 *    Problem Name  : A - Digit Game
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/1419/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N ;
        int odd = 0 , even = 0 ;

        string s ;
        cin >> s ;

        for(int i = 1; i <= N ; i++){
            int x = s[i-1]-'0';
            if(i&1){
                if(x&1) odd ++ ;
            }
            else{
                if(x%2 == 0) even ++ ;
            }
        }
        
        if(N&1){
            cout << (odd>0 ? 1 : 2) << endl ;
        }
        else{
            cout << (even>0 ? 2 : 1) << endl ;
        }

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
