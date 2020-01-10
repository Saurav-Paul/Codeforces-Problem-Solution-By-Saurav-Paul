
/**
 *    author:  Saurav_Paul 
 *    created: 10.01.2020 20:09:19       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

const int INF = 1e9 + 90;
const ll LINF = 1e18 + 90 ;
using pii = pair<int,int >;
using vec = vector<int> ;

void solve () {
	int n ;
	cin >>n ;
	vector<ll> v(n) ;
	ll yasser = 0;
	for(auto &x : v) cin >> x , yasser += x ;
	vector<ll> cum(n+1) ;
	for(int i = 1 ;i  <= n ; i++){
		cum[i] = cum[i-1] + v[i-1];
	}

	ll ans = -INF ;
	ll l = 0 ;
	for(int i = 1; i < n ; i ++){
		ans = max( ans , cum[i]-cum[l]) ;
		if(cum[i]<cum[l]) l = i;
	}
	l =1 ;
	for(int i = 2; i <= n ; i ++){
		ans = max( ans , cum[i]-cum[l]) ;
		if(cum[i]<cum[l]) l = i;
	}

	if(ans < yasser) cout <<"YES" << endl;
	else cout <<"NO" << endl ;

}

int main()
{
	boost ;
	int t; cin >> t;
	while(t--)
		solve() ;

    return 0;
}
