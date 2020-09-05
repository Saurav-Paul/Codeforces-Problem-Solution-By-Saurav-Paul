
/**
 *    author        : Saurav Paul 
 *    created       : September 04, 2020 8:44 PM
 *    Problem Name  : C. Yet Another Array Restoration
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N , x , y ;
    vector<int> ans ;

    bool check(){
        bool a = false , b = false ;

        for(auto p : ans){
            if(p == x) a = true;
            if(p == y) b = true ;
        }

        return (a&b) ;
    }
    
    public :
    void solve(){

        cin >> N >> x >> y;

        bool ok = false ;
        vector<int> v ;
        int mx = 1e9 + 90 ;

        for(int st = 1; st <= 50 ; st++){
            for(int dif = 1; dif <= 50 ; dif++){
                ans.clear() ;
                for(int tx = st , cnt = 0; cnt < N ; cnt++ , tx += dif){
                    ans.push_back(tx) ;
                }
                if(check()) {
                    ok = true ;
                    if(mx > ans.back()){
                        v = ans ;
                        mx = ans.back() ;
                    }
                }
            }
        }

        assert(ok) ;

        for(auto p : v) cout << p << " " ;
        cout << endl ;

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
