#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ; cin >> n;
    string s , t;
    cin >> s >> t;
 
    int cnt = 0;
    map<char, int > my_map ;
    vector<int> a ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] != t[i]){
            cnt ++;
            my_map[s[i] ] ++;
            my_map[t[i] ] ++;
            a.push_back(i) ;
        }
    }
    if(cnt == 0 || cnt == 2){
        bool ok = true ;
        for(auto x : my_map){
            if(x.second &1 ) ok = false ;
        }
        if(ok && cnt > 0){
            ok = false ;
            if( s[a[0] ] == t[ a[0] ] ) ok = true ;
            if(s[  a[0] ] != t[ a[1] ]) ok = true ;
        }
        if(ok)
            cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }
 
}
 
int main()
{
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t;
	while(t--)
        solve() ;
 
    return 0;
}
