				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

int main()
{
	boost ;
	int n , k ; cin >> n >> k ;
	string s; cin >> s;
	bool rem[27] = {} ;
	for(int i = 0 ; i < k ; i++){
		char c; cin >> c;
		rem[c-'a'] = true ;
	}
	for(auto &x : s){
		if(rem[x-'a'] == false)
			x = '0';
	}
	s += '0';

	long long int ans = 0;
	for(long long int i = 0, cnt = 0 ; i <= n ; i++){
		if(s[i] == '0'){
			ans += ( ( cnt*(cnt+1) ) >> 1 ) ;
			cnt = 0;
		}
		else cnt ++ ;
	}
	cout << ans << endl ;

    return 0;
}
