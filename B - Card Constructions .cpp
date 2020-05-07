
/**
 *    author:  Saurav_Paul 
 *    created: 06.05.2020 20:58:47       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n ;
    cin >> n;
    long long cnt = 0;
    while(n > 2){
        long long t = 5 ;
        long long now = 2 ;
        while(n >= t + now){
            now = t + now ;
            t += 3;
        }
        n -= now ;
        cnt ++;
    }
    if(n >= 2) cnt ++ ;
    cout << cnt << endl ;
   
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
