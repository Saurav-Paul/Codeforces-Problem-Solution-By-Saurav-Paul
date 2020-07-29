
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 11:53 AM
 *    Problem Name  : B. Universal Solution
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1380/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string S ;
    cin >> S ;

    string ans = "";
    int r = 0 , p = 0 , s = 0 ;
    char cr = 'R' , cp = 'P' , cs = 'S' ;

    for(auto x : S){
        if(x == 'R') r++ ;
        else if(x == 'S') s ++ ;
        else if(x == 'P') p ++ ;
        else assert(false) ;
    }

    if(r >= max(p,s)){
        cr = 'P' ;
        cs = 'P' ;
    }
    else if(p >= max(r,s)){
        cp = 'S' ;
        cr = 'S' ;
    }
    else if(s >= max(r,p)){
        cs = 'R' ;
        cp = 'R' ;
    }

    for(auto x : S){
        ans += (x=='R'?cp:(x=='P'? cs : cr)) ;
    }
    cout << ans << endl ;
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
