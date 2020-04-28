				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long x, y , a, b ;
    cin >> x >> y >> a >> b ;
    long long cost = 0 , com = min(x,y) ;
    if(2*a > b)
        cost = com * b ;
    else
        cost = com * 2 * a ;
    cost += (x-com) * a + (y-com) * a ;
    cout << cost << endl ;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
