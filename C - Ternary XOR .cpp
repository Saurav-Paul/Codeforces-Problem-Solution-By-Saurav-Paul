				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {

    int n ;
    string x , a, b;
    cin >> n >> x ;
    bool ok = false ;

    for(auto c : x){
        if(ok){
            a +='0';
            b += c ;
        }
        else{
            if(c == '1'){
                ok = true ;
                a +='1';
                b += '0';
            }
            else if(c == '3'){
                ok = true ;
                a += '2';
                b += '1' ;
            }
            else{
                a += (c=='0'?'0':'1') ;
                b += (c=='0'?'0':'1') ;
            }
        }
    }

    cout << a << endl << b << endl ;
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
