
/**
 *    author        : Saurav Paul 
 *    created       : August 25, 2020 8:41 PM
 *    Problem Name  : B. RPG Protagonist
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1400/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;


using ll = long long ;
ll p , f, cs, cw ,s , w;

void solve(){
    cin >> p >> f >> cs >> cw >> s >> w ;

    if(p > f) swap(p,f) ;
    if(s > w) swap(s,w) , swap(cs,cw) ;
    ll answer = 0;
    for(ll i = 0 ; i <= cs ; i++){

        if(i * s > p) break ;
        ll p_baki =  p - (i * s) ;
        ll p_w = min(cw,p_baki/w) ;

        ll f_nibe = min(cs-i,f/s) ; 
        ll f_baki = f - (f_nibe * s) ;
        ll f_w = min(cw-p_w,f_baki/w) ;

        ll t = f_nibe + f_w ;
        f_w = min(cw-p_w , f/w) ;
        f_baki = f - (f_w * w) ;
        f_nibe = min(cs - i , f_baki/s) ;
        t = max(t, f_nibe + f_w) ;

        answer = max(answer , i+p_w+t) ;

    }


    cout << answer << "\n" ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve() ;
    }

    return 0 ;
}
