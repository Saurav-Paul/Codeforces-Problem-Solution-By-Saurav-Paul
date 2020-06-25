
/**
 *    author        : Saurav Paul 
 *    created       : June 25, 2020 11:13 AM
 *    Problem Name  : C. Even Picture
 *    Problem Limit : 2000 ms , 512 MB
 *    Problem Url   : https://codeforces.com/contest/1368/problem/C
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n ;
    cin >> n ;

    cout << 4 + n * 3 << endl ;
    ++ n;
    cout << "0 0\n0 1" << endl ;

    for(int i = 1,st = 0 ; i <= n ; i++){
       int lim = st + 3 ;
       if(i == n ){
           lim -- ;
       }
       for(int j= st; j < lim ; j++){
          cout << i << " " << j << endl ;
       } 
       ++ st;
    }

    return 0;
}
