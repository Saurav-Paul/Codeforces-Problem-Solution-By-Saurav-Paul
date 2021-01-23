
/**
 *    author        : Saurav Paul 
 *    created       : November 23, 2020 8:49 AM
 *    Problem Name  : B - War of the Corporations
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/625/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        string s, t; 
        cin >> s >> t ;

        int cnt = 0 ;

        for(int i =0 ; i < s.size() ; i++){
            bool same = false ;

            for(int j = 0 ; j <= t.size() ; j++){
                if(j == t.size()){
                    same = true ;
                    i += ((int(t.size())-1)) ;
                }
                else{
                    if(s[i+j] != t[j]){
                        break ;
                    }
                }
            }

            if(same) cnt ++ ;
        }

        cout << cnt << endl ;

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
