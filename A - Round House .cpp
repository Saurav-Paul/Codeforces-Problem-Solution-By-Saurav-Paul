
/**
 *    author        : Saurav Paul 
 *    created       : November 07, 2020 7:24 PM
 *    Problem Name  : A - Round House
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/659/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , a , b ;
        cin >> n >> a >> b ;

        while(b){
            if(b < 0) a -- , b ++ ;
            else if (b > 0) a ++ , b -- ;

            if(a == n + 1) a = 1 ;
            if (a == 0) a = n ;
        }

        cout << a << endl ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
