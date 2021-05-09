
/**
 *    author        : Saurav Paul 
 *    created       : 09/05/2021 12:02:35
 *    Problem Name  : D. Maximum Sum of Products
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1519/problem/D
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
        vector<ll> a(n), b(n);
        for (auto &x : a)
        {
            cin >> x;
        }
        for (auto &x : b)
        {
            cin >> x;
        }

        vector<ll> pre(1);
        for (int i = 0; i < n; i++)
        {
            pre.push_back(pre.back() + (a[i] * b[i]));
        }

        ll mx = pre.back();
        for (int i = 0; i < n; i++)
        {

            ll sum = a[i] * b[i];
            for (int l = i - 1, r = i + 1; l >= 0 && r < n; l--, r++)
            {
                sum += a[l] * b[r];
                sum += a[r] * b[l];
                mx = max(mx, sum + pre[l] + pre[n] - pre[r + 1]);
            }
            sum = 0;
            for (int l = i, r = i + 1; l >= 0 && r < n; l--, r++)
            {
                sum += a[l] * b[r];
                sum += a[r] * b[l];
                mx = max(mx, sum + pre[l] + pre[n] - pre[r + 1]);
            }
        }

        cout << mx << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for (int i = 1; i <= testcases; i++)
    {
        TC tc;
        tc.solve();
    }

    return 0;
}
