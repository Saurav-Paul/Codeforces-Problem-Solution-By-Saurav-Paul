/**
 *    author        : Saurav Paul 
 *    created       : April 10, 2021 8:35 PM
 *    Problem Name  : A. Spy Detected!
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1512/problem/0
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
 
class TC{
 
    public :
    void solve(){
        int n ; cin >> n ;
        vector<int> v(n) ;
        map<int,int> rem ;
        for(auto &x : v){
            cin >> x;
            rem[x] ++ ;
        }
        for(int i = 0 ; i < n ; i++){
            if(rem[v[i]]  == 1){
                cout << i + 1 << endl ;
                return ;
            }
        }
        assert(false) ;
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
