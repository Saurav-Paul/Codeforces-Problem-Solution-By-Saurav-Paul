
/**
 *    author:  Saurav_Paul 
 *    created: 01.05.2020 20:35:23       
**/

#include<bits/stdc++.h>
using namespace std;
void solve() {

    long long n ;
    cin >> n;
    long long x = pow(2.0,n) , y = 0 ;

    long long  div = n/2 ; 
    for(int i = 1 ; i < n ; i++){
        if(i < div)
         x += pow(2.0,i) ;
        else
         y += pow(2.0,i) ;
    }

    cout << x - y << endl ;
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
