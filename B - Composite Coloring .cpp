				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
vector<int> prime = {2 , 3, 5, 7, 11 , 13, 17 , 19 , 23 , 29 , 31} ;
 
void solve() {
 
    long long  n ;
    cin >> n ; 
    vector<long long > v(n) ;
    vector<int> rem(n) ;
    for(auto &x : v){
        cin >> x ;
    }
    int cnt = 0 ;
    for(auto x : prime){
        bool ok = false ;
        for(int i = 0 ; i < n ; i ++){
            if(rem[i]==0 && v[i]%x==0){
                if(!ok){
                    ok = true ;
                    ++cnt ;
                }
                rem[i] = cnt ;
            }
        }
    }
    cout << cnt << endl ;
    for(auto x : rem){
        cout << x << " ";
    }
    cout << endl ;
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
