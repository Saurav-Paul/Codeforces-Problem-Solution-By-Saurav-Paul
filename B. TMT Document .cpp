
/**
 *    author        : Saurav Paul 
 *    created       : April 16, 2021 9:53 PM
 *    Problem Name  : B. TMT Document
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1509/problem/B
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
        string s;
        cin >> s;

        bool ok = true;

        int total = 0;
        for(auto c : s) if(c == 'M') ++total ;
        ok = checker(s) ;

        if(ok){
            reverse(s.begin(), s.end());
            ok = checker(s) ;
        }

        if ((n / 3) != total)
        {
            ok = false;
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    bool checker(string &s){
        bool ok = true ;
        int m = 0 , cnt = 0 ;

        for (auto c : s)
        {
            if (c == 'M')
            {
                m++;
                if (m > cnt)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                cnt++;
            }
        }

        return ok ;
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
