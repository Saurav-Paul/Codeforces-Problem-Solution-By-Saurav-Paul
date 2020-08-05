
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 11:22 AM
 *    Problem Name  : D. Replace by MEX
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1375/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;

    vector<int> v(n) ;
    for(auto &x : v) cin >> x ;

    auto check = [&](){
        for(int i = 1; i < n; i++){
            if(v[i] < v[i-1] )
                return false ;
        }
        return true ;
    };

    auto MEX = [&](){
        vector<int> temp(n+1) ;
        for(auto x : v) temp[x] ++ ;
        for(int i = 0 ; i <= n; i++){
            if(temp[i] == 0)
                return i ;
        }
        assert(false) ;

    };

    vector<int> mv ;
    while(!check()){
        int mex = MEX() ;

        if(mex < n){
            v[mex] = mex ;
            mv.emplace_back(mex+1) ;
        }
        else{
            int i = 0 ;
            while(v[i] == i) i++ ;
            v[i] = mex ;
            mv.emplace_back(i+1) ;
        }

    }

    cout << mv.size() << endl ;
    for(auto x : mv) cout << x <<" " ;
    cout << endl ;


}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
