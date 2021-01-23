
/**
 *    author        : Saurav Paul 
 *    created       : January 08, 2021 8:42 PM
 *    Problem Name  : A. Wizard of Orz
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1467/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int test ; cin >> test ;
    while(test--){
        long long x ; cin >> x;
        int t = 9 ;
        cout << t ;
        if(x > 1){
            cout << 8 ;
            x -= 2 ;
            t = 9 ;
            while(x--){
                cout << t ;
                if(t == 9) t = 0 ;
                else t ++ ;
            }
        }
        cout << endl ;
    }


    return 0 ;
}
