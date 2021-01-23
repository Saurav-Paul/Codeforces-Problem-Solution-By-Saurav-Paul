 
/**
 *    created       : January 08, 2021 9:06 PM
 *    Problem Name  : B. Hills And Valleys
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1467/problem/B
 *    @genarated by : ai-virtual-assistant
**/
 
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> v(n), imi(n);
    for (auto &x : v)
        cin >> x;
 
    int cnt = 0;
 
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > v[i + 1] && v[i] > v[i - 1])
            imi[i] = 1, cnt++;
        else if (v[i] < v[i + 1] && v[i] < v[i - 1])
            imi[i] = 2, cnt++;
    }
 
    // for (auto x : imi)
    // {
    //     cout << x << " ";
    // }
    // cout << " = " << cnt << endl;
    // cout << endl;
    int ans = cnt;
 
    for (int i = 1; i < n - 1; i++)
    {
        int x = 0, y = 0;
        if (imi[i])
            x++ , y++;
        // making same as right side..
        int p = v[i + 1];
        if (imi[i + 1])
            x++;
 
        if (i - 1 > 0)
        {
            if (v[i - 1] > v[i - 2] && v[i - 1] > p)
            {
                if (imi[i - 1] == 0)
                    x--;
            }
            else if (v[i - 1] < v[i - 2] && v[i - 1] < p)
            {
                if (imi[i - 1] == 0)
                    x--;
            }
            else
            {
                if (imi[i - 1])
                    x++;
            }
        }
        // cout << "Here" << endl ;
        // making same as left side..
        // cout <<" ---" << endl ;
        p = v[i - 1];
        if (imi[i - 1])
            y++;
        // cout << i << " " << n << endl;
        // cout << "p = " << p << " v1 = " << v[i+1] << endl ;; 
        if (i + 1 < n - 1)
        {
            if (v[i + 1] > v[i + 2] && v[i + 1] > p)
            {
                if (imi[i + 1] == 0)
                    y-- ;
                // else cout << "2" ;
            }
            else if (v[i + 1] < v[i + 2] && v[i + 1] < p)
            {
                if (imi[i + 1] == 0)
                    y--;
                // else cout << "4" ;
            }
            else
            {
                if (imi[i + 1])
                    y++;
                // else cout << "6"  ;
            }
        }
        // cout << endl ;
        // cout << i << "x = " << x << " y = " << y << " cnt = " << cnt << endl ;
        ans = min(ans, cnt - max(x, y));
    }
 
    cout << ans << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
 
    int t;
    cin >> t;
    while (t--)
        solve();
 
    return 0;
}
