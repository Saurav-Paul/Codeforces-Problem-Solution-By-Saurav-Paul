#include<bits/stdc++.h>
using namespace std;

void solve () {
	string s, ans; cin >> s;
	int sz = s.size() ;
	if(s[sz-1]=='o'){
		ans = "FILIPINO";
	}
	else if(s[sz-1]=='u'){
		ans = "JAPANESE";
	}
	else{
		ans = "KOREAN";
	}
	cout << ans << endl ;
}

int main() {
	ios_base::sync_with_stdio(false);
	int t; cin >> t;
	while(t--){
		solve () ;
	}
	return 0 ;
}
