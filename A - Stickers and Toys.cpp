#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n, s , k;
		cin >> n >> s >> k;
		cout << n - min(s,k) + 1 << endl;
	}
	
	return 0;
}
