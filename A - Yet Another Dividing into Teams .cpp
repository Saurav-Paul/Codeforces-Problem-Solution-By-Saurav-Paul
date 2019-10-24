				/*Saurav Paul*/
#include<bits/stdc++.h>
#define boost		          ios_base::sync_with_stdio(0);
using namespace std;

void solve(){
	int n ; cin>> n;
	vector<int> v(n);
	
	for(int &x : v) cin >> x ;
	sort(v.begin() , v.end());
	int team = 1;
	
	for(int i = 1 ; i < n ; i++){
		if(abs(v[i]-v[i-1]) <= 1){
			team = 2;
			break ;
		}
	}
	
	cout << team << endl ;
}

int main()
{
	boost; 
	int q ; cin >> q;
	while(q--){
		solve() ;
	}
	

    return 0;
}
