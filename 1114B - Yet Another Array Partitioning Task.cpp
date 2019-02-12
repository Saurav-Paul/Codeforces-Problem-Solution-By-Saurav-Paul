#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> Pair;


vector<int>beauty;
int main()
{


        int n, m, k;
        cin >> n >> m >> k;

        vector<Pair> ara(n);
        for(int i = 0; i < n; ++i)
        {
                cin >> ara[i].first;
                ara[i].second = i;
        }

        sort(ara.begin(), ara.end(), greater<Pair>());


        long long total=0;
        for(int i=0; i<m*k; i++)
        {
                total+=ara[i].first;
                beauty.push_back(ara[i].second);
        }

        sort(beauty.begin(),beauty.end());
        cout<<total<<endl;

        int element=0,segment=0;
        for(int i=0+(m-1); i<beauty.size(); i+=(m))
        {
                if(segment==k-1)
                        break;
                cout<<beauty[i]+1<<" ";
                segment++;

        }
        cout<<endl;
        return 0;
}
