
/**
 *    author:  Saurav_Paul 
 *    created: 10.05.2020 13:26:38       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ; cin >> n;
    if( n < 4) {
        cout << - 1 << endl ;
        return ;
    }
    for(int i = n ; i >= 1 ; --i){
        if(i & 1)
            cout << i << " ";
    }
    cout << 4 << " " << 2 << " ";
    for(int i = 6 ; i <= n ; i += 2){
            cout << i << " ";
    }
    cout << endl ;
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
