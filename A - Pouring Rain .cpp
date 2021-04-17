
 
/**
 *    author        : Saurav Paul 
 *    created       : January 24, 2021 9:19 AM
 *    Problem Name  : A - Pouring Rain
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
const double PI = 2 * acos(0.0) ;
 
class TC{
 
    public :
    void solve(){
        double d , h , v , e;
        cin >> d >> h >> v >> e;
        double t1 = 4 * v ;
        t1 = t1 / (PI * d * d) ;
 
        if(t1 > e){
            cout << "YES" << endl ;
            double ans = h / (t1 - e) ;
            cout <<fixed<<setprecision(6)<< ans << endl ;
        }
        else{
            cout << "NO" << endl ;
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
