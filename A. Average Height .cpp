  
/**
 *    author        : Saurav Paul 
 *    created       : April 17, 2021 12:55 PM
 *    Problem Name  : A. Average Height
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1509/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n; cin >> n ;
        vector<int> odd , even ;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            if(x&1) odd.push_back(x) ;
            else even.push_back(x) ;
        }

        for(auto x : odd) cout << x << " ";
        for(auto x : even) cout << x << " ";
        cout << endl ;
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
