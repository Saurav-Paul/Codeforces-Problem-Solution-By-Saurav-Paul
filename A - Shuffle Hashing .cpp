				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
	
	string s , hash ;
	cin >> s >> hash ;
	vector<int> rem(300),test ;
	
	for(auto x : s ){
		rem[x] ++;
	}
	
	int target = s.size () ;
	int sz = hash.size () ;
	
	for(int i = 0 ; i < sz ; i++ ){
		if(rem[hash[i]] > 0 ){
			test = rem ;
			int cnt = 0;
			for(int j = i ; j < sz ; j ++){
				char c = hash[j] ;
				if( test[c] == 0 ) break ;
				cnt ++;
				test[c] --;
				if(cnt == target ) break ;
			}
			if(cnt == target){
				cout <<"YES" << endl; 
				return ;
			}
		}
		
	}
	cout <<"NO" << endl ;
	return ;
}

int main()
{
	ios_base::sync_with_stdio(false) ;
	
	int t ; cin >> t;
	while(t--){
		solve () ;
	}

    return 0;
}
