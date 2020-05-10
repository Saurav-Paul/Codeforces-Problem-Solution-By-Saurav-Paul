
/**
 *    author:  Saurav_Paul 
 *    created: 09.05.2020 21:17:07       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ;
    cin >> n;
    vector< long long int > v(n) ;
    vector<int> rem(n+10,0) ;
    bool done[n+10] = {};
    long long int mx = 0 ;
    for(auto &x : v){
        cin >> x;
        rem[x] ++ ;
        mx = max(mx,x) ;
    }

    long long int cnt = 0 ;
    for(int i = 0 ; i< n ; i++){
        long long int temp = v[i];
        for(int j = i+1 ; j < n ; j++){
            temp += v[j] ;
            if(mx < temp) break ;
            if(done[temp] == false)
                cnt += rem[temp] , done[temp] = true ;
        }
    }
    cout << cnt << endl ;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
