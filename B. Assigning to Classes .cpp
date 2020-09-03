
/**
 *    author        : Saurav Paul 
 *    created       : September 03, 2020 9:17 PM
 *    Problem Name  : B. Assigning to Classes
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1300/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N ;
    vector<int> v;
    public :
    void solve(){
        cin >> N ;
        v.resize(2*N) ;

        for(auto &x : v) cin >> x;
        sort(v.begin(),v.end()) ;

        cout << v[N] - v[N-1] << endl ;

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
