
/**
 *    author:  Saurav_Paul 
 *    created: 09.05.2020 20:35:21       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    string s ; cin >> s;
    vector<string> v;

    for(int i = 0 , n = s.size() ; i < n ;i++){
        if(s[i] != '0'){
            v.emplace_back( s[i]+string(n-i-1,'0')) ;
        }
    }
    cout << v.size() << endl ;
    for(auto x : v){
        cout << x << " " ;
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
