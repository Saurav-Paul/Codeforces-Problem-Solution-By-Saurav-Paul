
/**
 *    author:  Saurav_Paul 
 *    created: 01.05.2020 22:22:36       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n , k ;
    cin >> n >> k ;
    string s ; cin >> s;
    sort(s.begin(),s.end()) ;
    vector< string > v(k,"") ;
    int point = 0 ;
    char c = s[n-1] ;
    for(int i = 0 ; i < k ; i++){
        v[i] += s[point++] ;
    }
    if(point < n && s[point] == c){
        long long p = n - point ;
        p = ceil((double)p/k) ;
        v[k-1] += string(p,c) ;
    }
    else{
        for( ; point < n ; point ++){
            v[k-1] += s[point] ; 
        }
    }
    if(v[0][0] != v[k-1][0]){
        v[k-1] = v[k-1][0] ;
    }
    cout << v[k-1] << endl ;
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
