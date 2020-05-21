				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ,  s;
    cin >> n >> s;
    if(s-n < n){
        cout << "NO" << endl ;
        return ;
    }
    cout << "YES" << endl ;
    for(int i = 0 ; i < n - 1; i++){
        cout << 2 << " " ;
        s-=2 ;
    }
    cout << s <<endl << 1 << endl ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase = 1;
    
    for (int t = 1; t <= testcase; t++){
        solve();
    }
    

    return 0;
}
