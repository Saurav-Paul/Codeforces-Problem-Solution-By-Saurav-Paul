				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
	long long int n, k , cnt = 0; cin >> n >> k;
	string s ; cin >> s ;
	string ans = "";
	bool ok = false ; 
	/* 
	 * 11100101
	 */
	for(int i = 0 ; i < n ;i++){
		if(s[i] == '0'){
			if(cnt <= k){
				ans += '0' ;
				k -= cnt ;
			}
			else{
				ans += string(cnt-k,'1') ;
				ans += '0' ;
				ans += string(k,'1') ;
				ans += s.substr(i+1) ;
				cout << ans << endl ;
				ok = true ;
				break ;
				
			}
		}
		else{
			cnt ++ ;
		}
	}
	if(!ok) {
		ans += string(cnt,'1') ;
		cout << ans << endl ;
	}
	
}

int main()
{
	ios_base::sync_with_stdio(false) ;
	int testcase ; cin >> testcase ;
	for(int i = 0 ; i < testcase ; i++) {
		solve() ;
	}

    return 0;
}
