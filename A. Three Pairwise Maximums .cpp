
/**
 *    author        : Saurav Paul 
 *    created       : July 28, 2020 11:22 AM
 *    Problem Name  : A. Three Pairwise Maximums
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1385/problem/A
 *    @genarated by ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    long long x , y , z;
    cin >> x >> y >> z;

    long long a, b, c;
    a = x , b = y , c = z ;

    bool ok = false ;
    if(x == y &&  y== z){
        a = b = c = x ;
        goto ans ;
    }
    
    if(x == y){
        a = x ;
        b = c = z ;
        goto ans ;
    }
    if(x == z){
        b = z ;
        a = c = y ;
        goto ans  ;
    }

    if(y == z){
        c = z ;
        a = b = x ;
        goto ans ;
    }


    ans :
    if(x == max(a,b) && y == max(a,c) && z == max(b,c)){
        ok = true ;
    }
    if(ok){
        cout << "YES" << endl << a << " " << b <<" " << c << endl ;
    }
    else{
        cout << "NO" << endl ;
    }


}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}

