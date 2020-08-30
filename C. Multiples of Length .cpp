
/**
 *    author        : Saurav Paul 
 *    created       : August 30, 2020 10:30 PM
 *    Problem Name  : C. Multiples of Length
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1397/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    ll N ;
    vector<ll> v;

    public :
    void solve(){
        cin >> N ;

        v.assign(N,0) ;

        for(auto &x : v){
            cin >> x;
        }

        if(N == 1){
            cout << "1 1" << endl ;
            cout << -v[0] << endl ;
            cout << "1 1" << endl ;
            cout << 0 <<  endl ;
            cout << "1 1" << endl ;
            cout << 0 << endl ;
            return ;
        }

        cout << 1 << " " << N-1  << endl ;;
        for(int i = 0 ; i < N - 1; i++){
            cout << v[i]*(N-1) << " " ;
        }

        cout << endl ;
        cout << 2 << " " << N << endl ;
        for(int i = 1; i < N  ; i++){
            if(i == N-1)
                cout << v[i]*(N-1) << " " ;
            else{
                cout << 0 << " " ;
            }
        }

        cout << endl ;
        cout << 1 << " " << N << endl ;
        for(int i = 0 ; i < N ; i++){
            cout << -v[i]*N << " " ;
        }
        cout << endl ;


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
