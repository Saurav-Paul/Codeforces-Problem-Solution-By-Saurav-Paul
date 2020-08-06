
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 8:41 PM
 *    Problem Name  : B. Gifts Fixing
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1399/problem/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n) , b(n) ;
    long long ma = 1e12 , mb = 1e12 , sa= 0 , sb = 0;

    for(auto &x : a){
        cin >> x;
        ma = min(ma,x) ;
    }
    for(auto &x : b){
        cin >> x;
        mb = min(mb,x) ;

    }

    long long ans = 0 ;
    for(int i = 0 ; i < n ; i++){

        long long temp = 0 ;

        if(a[i] > ma){
            temp = a[i] - ma ;
        }
        if(b[i] > mb){
            temp = max(temp , b[i] - mb) ;
        }
        ans += temp ;

    }

    cout << ans << endl ; 
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
