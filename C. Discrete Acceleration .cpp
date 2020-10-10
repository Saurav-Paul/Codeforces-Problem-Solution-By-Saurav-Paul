
/**
 *    author        : Saurav Paul 
 *    created       : October 11, 2020 6:13 AM
 *    Problem Name  : C. Discrete Acceleration
 *    Problem Limit : 3000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1408/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

#define double long double

class TC{

    static const int nax = 1e5 + 90 ;
    int a[nax] ;

    public :
    void solve(){
        int n, x; cin >> n >> x;
        for (int i = 1; i <= n; i++) cin >> a[i];
        a[n + 1] = x;
        double l = 0, r = x;
        int it = 200;
        while (it--) {
            double mid = (l + r) / 2, t = mid;
            double nw1 = x;
            for (int i = 1; i <= n + 1; i++) {
                double cur = 1.0L * (a[i] - a[i - 1]) / i;
                if (cur >= t) {
                    nw1 = a[i - 1] + 1.0L * i * t;
                    break;
                }
                else {
                    t -= cur;
                }
            }   		
            double nw2 = 0;
            t = mid;
            for (int i = n; i >= 0; i--) {
                double cur = 1.0L * (a[i + 1] - a[i]) / (n - i + 1);
                if (cur >= t) {
                    nw2 = a[i + 1] - 1.0L * (n - i + 1) * t;
                    break;
                }
                else {
                    t -= cur;
                }
            }
            if (nw1 >= nw2) {
                r = mid;
            }
            else {
                l = mid;
            }
        }
        cout << fixed << setprecision(10) << (l + r) / 2 << '\n';

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
