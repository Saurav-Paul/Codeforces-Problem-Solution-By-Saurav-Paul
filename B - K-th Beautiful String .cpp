				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {

    long long  n , k ;
    cin >> n >> k ;
    string s(n,'a') ;
    /*
        n*(n-1) = 2k
        n2 - n - 2k = 0 
    */
    long long  p =  -1 + sqrt(1 + 4 * 2 * (k-1) ) ;
    p /= 2 ;
    long long  temp = p * (p+1) ;
    temp /=2 ;
    s[n-1-p-1] = 'b' ;
    s[n - (k-temp)]='b' ;
    cout << s << endl ;
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
