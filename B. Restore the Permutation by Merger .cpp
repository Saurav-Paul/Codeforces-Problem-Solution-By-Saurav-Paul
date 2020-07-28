
/**
 *    author        : Saurav Paul 
 *    created       : July 28, 2020 12:29 PM
 *    Problem Name  : B. Restore the Permutation by Merger
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1385/problem/B
 *    @genarated by ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    bool num[n+1] = {} ;
    n *= 2;
    vector<int> v(n) , ans;

    for(auto &x : v ){
        cin >> x ;
    }

    for(int i = 0 ; i< n ; i++){
        if(num[v[i]] == false){
            ans.emplace_back(v[i]) ;
            num[v[i]] = true ;
        }
    }

    for(auto x : ans)
        cout << x << " ";
    cout <<endl ;
    
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
