
/**
 *    author:  Saurav_Paul 
 *    created: 14.05.2020 20:35:27       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n , k ;
    cin >> n >> k ;
    if( n == 1 ){
        cout << 0 << endl ;
    }
    else if ( n == 2){
        cout << k << endl ;
    }
    else {
        cout << 2*k << endl ;
    }
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
