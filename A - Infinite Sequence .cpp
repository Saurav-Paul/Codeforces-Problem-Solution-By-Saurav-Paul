
/**
 *    author        : Saurav Paul 
 *    created       : February 28, 2021 9:01 AM
 *    Problem Name  : A - Infinite Sequence
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        long long a , b, c ;
        bool ok = false ;
        cin >> a >> b >> c;
        ll x = b - a ;
        if(a == b){
            ok = true ;
        }
        if((0 < x && c > 0) || (0 > x && c < 0)){
            if(x % c == 0) ok = true ;
        }
        cout << (ok?"YES":"NO") << endl ;
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
