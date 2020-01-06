
/**
 *    author:  Saurav_Paul 
 *    created: 06.01.2020 19:07:17       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

void solve () {
	string s , t; cin >> s >> t;
	int n = s.size() ;
	for(int i = 0 , x = 0;i  < n; i ++){
		x = i ;
		for(int j = i + 1; j < n ; j++){
			if(s[j] <= s[x] ){
				x = j ;
			}
		}
		if(s[x] < s[i]){
			swap(s[x],s[i]) ;
			break ;
		}
	}
	if(s < t) cout << s << endl ;
	else cout <<"---"<< endl ;
}

int main()
{
	boost ;
	int t ;
	cin >> t;
	while(t--){
		solve () ;
	}

    return 0;
}
