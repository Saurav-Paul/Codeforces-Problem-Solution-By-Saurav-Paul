
/**
 *    author:  Saurav_Paul 
 *    created: 06.05.2020 20:36:07       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n , m;
    cin >> n >> m;
    if(n > m){
        swap(n,m) ;
    }
    if( (m >= 3 && n > 1) ){
        cout << "NO" << endl ;
    }
    else{
        cout << "YES" << endl ;
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
