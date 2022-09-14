
/**
 *    author        : Saurav Paul
 *    created       : September 14, 2022 1:45 AM
 *    Problem Name  : C. Jumping on Tiles
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1729/problem/C
 *    @genarated by : ai-virtual-assistant
 **/

#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

class TC
{

public:
	void solve()
	{
		string s;
		cin >> s;

		int n = s.size();
		vector<pair<int, int>> v;

		for (int i = 0; i < s.size(); i++)
		{
			pair<int, int> p = make_pair(s[i] - 'a' + 1, i + 1);
			v.push_back(p);
		}

		if (s[0] > s[n - 1])
		{
			sort(v.begin(), v.end() , [](pair<int,int> &a, pair<int,int> &b){
				if(a.first == b.first){
					return a.second < b.second ;
				}
				return a.first > b.first ;
			});
		}

		else{
			sort(v.begin(), v.end() , [](pair<int,int> &a, pair<int,int> &b){
				if(a.first == b.first){
					return a.second < b.second ;
				}
				return a.first < b.first ;
			});
		}

		vector<int> ans;
		int cost = 0;

		bool started = false;
		int prev = 0;


		for(int i = 0 ; i < n ; i++){
			if(v[i].second == n){
				for(int j = i + 1; j < n ; j++){
					if(v[j-1].first == v[j].first){
						swap(v[j-1], v[j]);
					}
				}
			}
		}

		for (int i = 0; i < n; i++)
		{
			pair<int, int> p = v[i];
			if (p.second == 1)
				started = true, prev = p.first, ans.push_back(p.second);

			else if (started)
			{
				cost += abs(prev - p.first);
				prev = p.first;
				ans.push_back(p.second);
			}

			if (p.second == n)
				break;
		}

		cout << cost << " " << ans.size() << endl;

		for (auto x : ans)
			cout << x << " ";
		cout << endl;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);

	int testcases = 1;
	cin >> testcases;
	for (int i = 1; i <= testcases; i++)
	{
		TC tc;
		tc.solve();
	}

	return 0;
}
