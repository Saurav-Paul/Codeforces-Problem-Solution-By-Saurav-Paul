
/**
 *    author        : Saurav Paul 
 *    created       : 10/05/2021 19:28:47
 *    Problem Name  : B. Tavas and SaDDas
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/535/B
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
        int ans = 0, bit = 1;
        while (n)
        {
            int dig = n % 10;
            n /= 10;
            if (dig % 10 == 4)
            {
                ans += bit;
            }
            else
            {
                ans += (bit << 1);
            }
            bit = (bit << 1);
        }
        cout << ans << endl;
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
