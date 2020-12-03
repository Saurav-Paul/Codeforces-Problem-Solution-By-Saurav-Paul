/**
 *    author        : Saurav Paul 
 *    created       : November 08, 2020 9:18 AM
 *    Problem Name  : B - Code Parsing
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/255/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        string s ;
        cin >> s; 
        int x = 0 , y = 0 ;

        for(auto c : s){
            if(c == 'x') x++;
            else if(c == 'y') y ++ ;
        }

        if(x == y){
            assert(false) ;
        }

        if(x>y){
            x -= y ;
            cout << string(x,'x') << endl ;
        }
        else{
            y -= x;
            cout << string(y,'y') << endl ;
        }
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
