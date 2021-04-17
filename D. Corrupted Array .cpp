  
/**
 *    author        : Saurav Paul 
 *    created       : April 10, 2021 9:33 PM
 *    Problem Name  : D. Corrupted Array
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1512/problem/D
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
 
class TC{
 
    public :
    void solve(){
        ll n ; cin >> n ;
        vector<ll> v(n + 2) ;
        ll total = 0 ;
        for(auto &x : v){
            cin >> x;
            total += x ;
        }
        sort(v.begin() , v.end()) ;
        total -= (v[n] + v[n+1]) ;
        if(total == v[n] || total == v[n+1]){
            for(ll i = 0 ; i < n ; i++){
                cout << v[i] << " ";
            }
            cout << endl ;
            return ;
        }
 
        bool ok = false ;
 
        for(ll i = 0 ; i < n ; i++){
            ll temp = total - v[i] ;
            if(temp + v[n] == v[n+1]){
                ok = true ;
                v[i] = v[n] ;
                break ;
            }
        }
 
        if(!ok) cout << -1 << endl ;
        else{
            for(ll i = 0 ; i < n ; i++){
                cout << v[i] << " ";
            }
            cout << endl ;
        }
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
