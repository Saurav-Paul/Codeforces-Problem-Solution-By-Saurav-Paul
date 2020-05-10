
/**
 *    author:  Saurav_Paul 
 *    created: 09.05.2020 21:50:16       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int a, b, c , t;
    cin >> a >> b >> c;
    string x , y , z;
    t = b ;
    x = y = z = "" ;
    if(a > 0)
    x = string(a + 1 , '0') ;
    if(b%2==0 && b > 0){
        if(a == 0){
            for(int i = 0 ; i<= b ; i++){
                y += (i&1 ?'0':'1') ;
            }
            goto nxt ;
        }
        else{

        x = '1' + x ;
            for(int i = 0 ; i < b-1 ; i++){
                 y += (i&1?'0':'1') ;
             }
        goto nxt ;
        }
    }
    if(b > 0)
    for(int i = 0 ; i < b ; i++){
        y += (i&1?'0':'1') ;
    }
    if(a == 0 && b > 0){
        y = '0' + y ;
    }
    nxt :
    if(c>0){
    z = string(c,'1') ;
    if(t == 0) z += '1' ;
    }
    string ans = x + y + z ;
    cout << ans << endl ;
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
