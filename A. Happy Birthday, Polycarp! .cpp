
/**
 *    author:  Saurav_Paul 
 *    created: 06.01.2020 16:46:46       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);

void solve() {
	string s; cin >> s;
	int st = s[0] - '0' ;
	bool ok = true ;
	for(int i = 1; i <(int) s.size() ; i ++){
		if(s[i] > s[i-1] ) break ;
		if(s[i] < s[i-1]){
			ok = false ;
			break ;
		}
	}
	cout << 9 * (s.size() -1 ) + st + ok -1 << endl ;
}

int main()
{
	boost ; 
	int t ; cin >> t;
	while(t--)
		solve() ;

    return 0;
}
