
/**
 *    author        : Saurav Paul 
 *    created       : September 06, 2020 9:39 AM
 *    Problem Name  : B - Little Pony and Crystal Mine
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/393057#problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N ;

        for(int d = 1 ; d <= N ; d+=2){
            int star = N - d;
            star /= 2;
            for(int i = 0 ; i < star ; i++){
                cout << "*" ;
            }
            for(int i = 0 ; i < d ; i++){
                cout << "D";
            }
            for(int i = 0 ; i < star ; i++){
                cout << "*" ;
            }
            cout << endl ;
        }
        for(int d = N-2 ; d > 0 ; d-= 2){
            int star = N - d;
            star /= 2;
            for(int i = 0 ; i < star ; i++){
                cout << "*" ;
            }
            for(int i = 0 ; i < d ; i++){
                cout << "D";
            }
            for(int i = 0 ; i < star ; i++){
                cout << "*" ;
            }
            cout << endl ;
        }
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
