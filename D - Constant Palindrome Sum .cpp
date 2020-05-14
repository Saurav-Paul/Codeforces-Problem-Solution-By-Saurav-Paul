				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n , k;
    cin >> n >> k;
    vector<int> v(n) ;
    for(auto &x : v){
        cin >> x;
    }
    vector<long long int > border(2*k + 10) , cnt(2*k + 10) ;
    for(int i = 0 , j = n-1 ; i < j ; i ++ , j --){
        cnt[v[i]+v[j]] ++ ;
        border[min(v[i],v[j]) + 1] ++ ;
        long long int x = 
        border [max(v[i],v[j])+k+1] -- ;
    }
    long long int total = n/2 ;
    for(int i = 1 ; i < 2 * k + 10 ; i++){
        border[i] += border[i-1] ;
    }
    long long int mn = n ;

    for(int i = 0 ; i < 2 * k + 10 ; i ++){
        long long int cal = (total-border[i]) * 2 + border[i] - cnt[i] ;
        mn = min(mn,cal) ;
    }

    cout << mn << endl ;
    
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
