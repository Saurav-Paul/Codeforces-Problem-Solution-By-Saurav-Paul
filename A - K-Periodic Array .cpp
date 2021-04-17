
/**
 *    author        : Saurav Paul 
 *    created       : February 21, 2021 9:07 AM
 *    Problem Name  : A - K-Periodic Array
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , k ; cin >> n >> k ;
        vector<int> v(n) , one(k,0) , two(k,0) ;

        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
            if(v[i] == 1){
                one[i%k] ++;
            }
            else if(v[i] == 2){
                two[i%k] ++;
            }
            else{
                assert(false) ;
            }
        }

        ll cost = 0 ;

        for(int i = 0 ; i < k ; i++){
            cost += (n/k - max(one[i],two[i])) ;
        }

        cout << cost << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1; ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
