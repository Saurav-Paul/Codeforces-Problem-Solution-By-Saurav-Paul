				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int q, x;
	cin >> q >> x;
	const int nax = 4e5 + 10;
	vector<int> cnt(nax);
	int MEX = 0;
	while (q--)
	{
		int n;
		cin >> n;
		cnt[n % x]++;
		while(cnt[MEX%x]){
			cnt[MEX%x]--;
			MEX++;
		}
		cout << MEX << endl;
	}
	return 0;
}
