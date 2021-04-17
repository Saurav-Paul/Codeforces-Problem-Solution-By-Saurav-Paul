
/**
 *    author        : Saurav Paul 
 *    created       : February 07, 2021 9:00 AM
 *    Problem Name  : A - The Eternal Immortality
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll a , b , ans = 1 ;
        cin >> a >> b ;
        if(b - a >= 10) cout << 0 << endl ;
        else {
            for(ll i = a + 1 ; i <= b ; i++){
                ans = ( ans * (i%10)) % 10 ;
                if(ans == 0) break ;
            }
            cout << ans << endl ;

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
