
/**
 *    author:  Saurav_Paul 
 *    created: 12.05.2020 19:56:41       
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void find_it(vector<long long int > &v, long long int n){
    long long int g=v[0];
        vector<ll> keep;
        for(int i=1; i<n; i++){
            ll x=__gcd(g, v[i]);
            ll y=(g*v[i])/x;
            keep.emplace_back(y);
            g=x;
        }
        ll ans=keep[0];
        ll limit=keep.size();
        for(long long int  i=1; i<limit; i++){
            ans=__gcd(ans, keep[i]);
        }
        cout << ans << endl ;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n ;
    cin >> n;
    vector< long long int> v(n) ;
    for(auto &x : v){
        cin >> x;
    }

    find_it(v,n) ;

    return 0;
}
