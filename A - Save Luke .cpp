
/**
 *    author        : Saurav Paul 
 *    created       : December 21, 2020 9:02 AM
 *    Problem Name  : A - Save Luke
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        double d , L , v1 , v2 ;
        cin >> d >> L >> v1 >> v2 ;
        double ans = (L-d) / (v1 + v2) ;

        cout << setprecision(10)<< fixed << ans << endl ;

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
