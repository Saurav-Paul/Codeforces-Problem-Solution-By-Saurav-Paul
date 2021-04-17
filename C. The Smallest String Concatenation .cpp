
/**
 *    author        : Saurav Paul 
 *    created       : March 16, 2021 11:09 PM
 *    Problem Name  : F - The Smallest String Concatenation
 *    Problem Limit : 3000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

bool compare(const string &a ,const string &b){
    return a + b < b + a ;
}

class TC{

    public :
    void solve(){
        int n ; cin >> n ;
        vector<string>  v(n) ;
        for(auto &x : v) cin >> x;
        sort(v.begin() , v.end() , compare) ;

        for(auto x : v){
            cout << x ;
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
