
/**
 *    author        : Saurav Paul 
 *    created       : September 03, 2020 9:25 PM
 *    Problem Name  : C. Anu Has a Function
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1300/c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class TC{

    int N ;
    vector<int> v , bit;

    public :
    void solve(){
        cin >> N ;

        bit.assign(31,0) ;
        v.resize(N) ;

        for(auto &x : v){
            cin >> x;
            for(int i = 0 ; i < 31 ; i++){
                if(x&(1 << i)) bit[i] ++ ;
            }
        }

        bool cholbe = true ;
        for(int b = 30 ; b >= 0 && cholbe ; b--){
            if(bit[b] == 1){
                for(int i = 0 ; i < N ; i++){
                    if(v[i] & (1 << b)){
                        swap(v[0],v[i]) ;
                        cholbe = false ;
                        break ;
                    }
                }
            }
        }


        for(auto x : v) cout << x << " " ;
        cout << endl ;

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
