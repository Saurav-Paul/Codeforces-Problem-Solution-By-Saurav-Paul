
/**
 *    author        : Saurav Paul 
 *    created       : July 28, 2020 8:47 PM
 *    Problem Name  : D. a-Good String
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1385/problem/D
 *    @genarated by ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

string s ;

int needTochange(char a, int st , int sp){
    int cnt = 0 ;
    for(int i = st ; i <= sp ; i++){
        if(s[i] != a)
            ++ cnt ;
    }
    return cnt ;
}

int cal(char c ,int st ,int sp){
    if(st == sp){
        return (s[st] == c? 0 : 1) ;
    }

    int mid = (st + sp) >> 1;
    return min(  needTochange(c,st,mid) + cal(c+1,mid+1,sp)  , needTochange(c,mid+1,sp) + cal(c+1,st , mid)) ;
}

void solve(){
    int n ;
    cin >> n;
    cin >> s;

    int st = 0 , sp = n-1 ;

    cout << cal('a' , st , sp) << endl ;
    
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
