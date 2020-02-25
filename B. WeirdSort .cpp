				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {

    int m , n ;
    cin >> m >> n;
    vector<int> v(m) , extra;
    for(auto &x : v){
        cin >> x;
    }
    extra = v;
    sort(extra.begin(),extra.end()) ;
    bool ok = true ;
    vector<int > ind(n) ;
    for(auto &x : ind){
        cin >> x;
        --x;
    }
    while(ok){
        ok = false ;
        for(auto x : ind){
            if(x < m-1 && (v[x]>v[x+1])){
                swap(v[x] , v[x+1]) ;
                ok = true ;
            }
        }
    }
    if(extra == v){
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
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
