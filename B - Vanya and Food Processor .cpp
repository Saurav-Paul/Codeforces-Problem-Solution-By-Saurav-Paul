
/**
 *    author        : Saurav Paul 
 *    created       : January 10, 2021 9:13 AM
 *    Problem Name  : B - Vanya and Food Processor
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n, h, k;
    cin >> n >> h >> k;

    long long ans = 0;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    long long container = 0;
    for (int i = 0; i < n; i++)
    {
        if (container + v[i] <= h)
        {
            container += v[i];
        }
        else
        {
            // while (container + v[i] > h)
            // {
            //     ++ans;
            //     container = max(0LL, container - k);
            // }
            long long ex = (container + v[i] ) - h ;
            ex = (ex + k - 1) / k ;
            container = max(0LL , container - ex * k) ;
            ans += ex ;
            container += v[i];
        }

    }    

    ans += (container + k - 1) / k;
    cout << ans << endl;

    return 0;
}
