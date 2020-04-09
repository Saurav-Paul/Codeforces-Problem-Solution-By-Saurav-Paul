				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {

    int r , c;
    cin >> r >> c;

    for(int i = 0 ; i < r ; i ++){
        string s(c,'B') ;
        if(i==0){
            s[0] = 'W' ;
        }
        cout << s << endl ;
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
