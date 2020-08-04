
/**
 *    author        : Saurav Paul 
 *    created       : August 04, 2020 8:12 PM
 *    Problem Name  : C. Element Extermination
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1375/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n; i++){
        cin >> v[i] ;
    }
    cout << (v[0] < v[n-1]?"YES" : "NO") << endl ;
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
