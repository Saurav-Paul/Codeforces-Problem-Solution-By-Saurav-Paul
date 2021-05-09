
/**
 *    author        : Saurav Paul 
 *    created       : 09/05/2021 11:22:51
 *    Problem Name  : C. Berland Regional
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1519/problem/C
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
        int n;
        cin >> n;
        vector<vector<ll>> v(n + 1, vector<ll>());
        vector<int> u(n), s(n);
        for (auto &x : u)
            cin >> x;
        for (auto &x : s)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            v[u[i]].push_back(s[i]);
        }

        vector<ll> ans(n + 1);
        for (int i = 1; i <= n; i++)
        {
            vector<ll> temp(1);
            sort(v[i].begin(), v[i].end(), greater<ll>());
            for (int j = 0; j < v[i].size(); j++)
            {
                temp.push_back(temp.back() + v[i][j]);
            }
            for (int j = 1; j <= temp.size(); j++)
            {
                int t = (int)(temp.size() - 1) / j;
                t = t * j;

                ans[j] += temp[t];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << (i == n ? "\n" : " ");
        }
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
