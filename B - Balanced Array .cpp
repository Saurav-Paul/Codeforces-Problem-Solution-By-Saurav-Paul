
/**
 *    author:  Saurav_Paul 
 *    created: 21.04.2020 20:54:11       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n ;
    cin >> n;
    long long sz = n/2 + (n%2);
    if(sz&1){
        cout << "NO" << endl ;
        return ;
    }
    cout<< "YES" << endl ;
    vector<long long > a(sz) , b(sz);
    long long x = 2 ;
    for(int i = 0 ; i < sz ; i++){
        a[i] = x ;
        b[i] = x-1;
        x += 2 ;
    }
   
    b[sz-1] += (sz) ;
    for(auto t : a){
        cout << t << " ";
    }
    for(auto t : b){
        cout << t << " ";
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
