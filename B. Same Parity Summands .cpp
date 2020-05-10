
/**
 *    author:  Saurav_Paul 
 *    created: 09.05.2020 20:41:48       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n , k ;
    cin >> n >> k;
    if(k > n){
        cout << "NO" << endl ;
        return ;
    }
    if( (n-k + 1)&1 ){
        cout << "YES" << endl ;
        for(int i = 1 ; i < k ; i++){
            cout << 1 << " ";
        }
        cout << n - k + 1 << endl ;
    }
    else if( (n - 2*(k-1) )%2 ==0 && (n - 2*(k-1))> 0 ){
        cout << "YES" << endl ;
        for(int i = 1 ; i < k ; i++){
            cout << 2 << " ";
        }
        cout << n - 2*(k-1) << endl ;
    }
    else {
        cout << "NO" << endl ;
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
