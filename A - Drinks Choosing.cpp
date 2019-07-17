
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n, k; cin >> n >> k;
	vector < int > drink(k+1);
	for(int i = 0 ; i < n ; i++){
		int temp ;
		cin >> temp;
		drink[temp] ++;
	}
	int take = n/2 + (n&1);
	int cnt = 0;
	for(int i = 1; i <= k ; i++){

		if(drink[i]/2){
			cnt += drink[i]/2;
		}
	}

	cnt = min(cnt,take);
	
	cout << 2*cnt + (take-cnt) << endl ;
	
    return 0;
}
