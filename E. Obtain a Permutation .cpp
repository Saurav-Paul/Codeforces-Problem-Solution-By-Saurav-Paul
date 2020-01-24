
/**
 *    author:  Saurav_Paul 
 *    created: 24.01.2020 11:31:11       
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n + 1, vector<int>(m + 1));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> v[i][j];

	auto cal = [&](int x) {
		if(x > n*m)
			return x;
		x %= m;
		return (x == 0 ? m : x);
	};

	long long total = 0,ans = 0;

	for (int j = 1; j <= m; j++){
		vector<int> cnt(n + 1);
		for (int i = 1; i <= n; i++)
		{
			if(cal(v[i][j])==j){
				int pos = ceil((double)v[i][j] / m);
				int need = i - pos;
				if(need < 0)
					need += n;
				cnt[need]++;
			}
		}

		int mx = 0 , ind = -1 ;
	
		for (int i = 0; i <= n; i++){
			int diff = cnt[i] - i;
			if(diff>mx){
				mx = diff;
				ind = i;
			}
		}
		if(ind == -1)
			continue;
		ans += ind;
		total += cnt[ind];
	}
	ans += (n * m - total);
	cout << ans << endl;
	return 0;
}
