
/**
 *    author        : Saurav Paul 
 *    created       : January 17, 2021 9:00 AM
 *    Problem Name  : A - Holidays
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/417942#problem/A
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
        int week = (n / 7);
        int extra = n % 7;
        int mn = week * 2 + max(0, extra - 5);
        extra = min(2, extra);
        int mx = week * 2 + extra;

        cout << mn << " " << mx << endl;
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
