
 				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
 
#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

int main()
{
	boost;
	ll n , m ; 
	cin >> n >> m ;
	vector<string> s(n) , t(m) ;
	for(auto &x : s) cin >> x;
	for(auto &x : t) cin >> x;
	int testcase; cin >> testcase ;
	while(testcase--){
		ll x ; cin >> x;
		x--;
		cout << s[x%n] + t[x%m] << endl ;
	}
 
    return 0;
}
