
/**
 *    author        : Saurav Paul 
 *    created       : September 15, 2020 9:35 PM
 *    Problem Name  : A. Sum of Odd Integers
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1327/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){

        ll N , K ;
        cin >> N >> K ;

        if((N&1) != (K&1)) {
            cout << "NO" << endl ;
            return ;
        }

        ll sum = K * K ;
        if(sum > N){
            cout << "NO" << endl ;
        }
        else{
            cout << "YES" << endl ;
        }


    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
