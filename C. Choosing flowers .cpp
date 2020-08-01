
/**
 *    author        : Saurav Paul 
 *    created       : August 01, 2020 5:19 PM
 *    Problem Name  : C. Choosing flowers
 *    Problem Limit : 1000 ms , 512 MB
 *    Problem Url   : https://codeforces.com/contest/1379/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , m ;
    cin >> n >> m ;

    vector<pair<int,int>> v(m) ;
    for(auto &x : v){
        cin >> x.first >> x.second ;
    }

    sort(v.begin(), v.end(),greater<pair<int,int>>()) ;

    vector<long long> cum(m+1) ;
    long long ans = 0 ;
    for(int i = 0 ; i< m ; i++){
        cum[i] = v[i].first ;
        if(i) cum[i] += cum[i-1] ;
        ans = max(ans, v[i].first + 1LL * v[i].second * (n-1)) ;
    }


    for(int i = 0 ; i < m ; i++){
        int l = 0 , r = m  - 1;
        while(l < r){
            int mid = (l+r +1) >> 1 ;
            if(v[i].second <= v[mid].first) l = mid ;
            else r = mid - 1 ;
        }

        if(l >= n - 1) ans = max(ans,cum[n-1]) ;
        else{
            if(l >= i) ans = max(ans,cum[l]+ 1LL * v[i].second * (n - l - 1));
            else ans = max(ans, cum[l] + v[i].first + 1LL * v[i].second * ( n - l - 2 )) ;
        }

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
