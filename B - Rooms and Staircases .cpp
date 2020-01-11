
/*Saurav Paul*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define boost ios_base::sync_with_stdio(0);


void solve()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;

	ll mx = 0;
	ll cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
			cnt++;
		cnt++;
	}
	mx = max(cnt, mx);
	cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[i] == '1')
			cnt++;
		cnt++;
	}
	mx = max(cnt, mx);
	cnt = 0;
	ll l = n, r = -1;
	for (ll i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			l = min(l, i);
			r = max(r, i);
		}
	}
	if (r != -1)
	{
		r++;
		mx = max({mx, 2 * (r), 2 * (n - l)});
	}
	cout << mx << endl;
}

int main()
{
	boost;
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}
