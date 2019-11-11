#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n ; cin >> n;
    vector<int > v(n);
    for(auto &x : v)
        cin >> x;
 
    sort(v.begin() , v.end() );
    int mx = 0;
    for(int i = n-1 ; i>= 0 ; i--){
        int x = min(v[i],n-i);
        mx = max(mx, x);
    }
    cout << mx << endl ;
 
}
 
int main()
{
    ios_base::sync_with_stdio(false) ;
    int t ; cin >> t;
    while(t--)
        solve() ;
 
    return 0;
}
