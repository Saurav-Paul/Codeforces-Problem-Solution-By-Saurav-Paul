
/**
 *    author        : Saurav Paul 
 *    created       : 08/05/2021 23:47:57
 *    Problem Name  : B. The Cake Is a Lie
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1519/problem/B
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
        ll x, y, k;
        cin >> x >> y >> k;
        ll mn = x - 1 + (y - 1) * (x);
        ll mx = y - 1 + (x - 1) * (y);
        if (mn > mx)
            swap(mn, mx);
        if (k >= mn and k <= mx)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
