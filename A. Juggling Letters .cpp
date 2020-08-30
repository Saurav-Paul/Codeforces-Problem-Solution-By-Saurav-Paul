
/**
 *    author        : Saurav Paul 
 *    created       : August 30, 2020 8:35 PM
 *    Problem Name  : A. Juggling Letters
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1397/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N , P;
        cin >> N ;
        P = N ;
        map<char,int> cnt ;
        while(P--){
            string s;
            cin >> s;
            for(auto x : s){
                cnt[x] ++ ;
            }
        }

        bool ok = true ;

        for(auto x : cnt){
            if(x.second % N != 0){
                ok = false ;
                break ;
            }
        }
        cout << (ok?"YES":"NO") << endl ;

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
