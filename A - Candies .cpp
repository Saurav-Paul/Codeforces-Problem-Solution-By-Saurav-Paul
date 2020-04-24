
/**
 *    author:  Saurav_Paul 
 *    created: 21.04.2020 20:35:18       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n ;
    cin >> n ;
    long long t = 1 ;
    for(long long i = 1 ; ; i++){
        t += pow(2.0,i) ;
        if(n%t==0){
            long long ans = n/t ;
            cout << ans << endl ;
            break ;
        }
        
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }
	

    return 0;
}
