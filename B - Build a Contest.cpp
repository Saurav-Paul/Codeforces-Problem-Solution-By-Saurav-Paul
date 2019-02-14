#include <bits/stdc++.h>
using namespace std;
#define ll long long int
std::vector<ll> difficulties;
int check[111111];
ll n,m;
int main()
{
    ll cnt=0,temp;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        cin>>temp;

        if(!check[temp])
        {
            cnt++;

        }
        check[temp]++;
        if(cnt==n)
        {
            cnt=0;
            cout<<1;
            for(int j=0; j<=n; j++){

            if(check[j]>1)
                    cnt++;

                if(check[j])
                    check[j]--;

            }

        }
        else
            cout<<0;
    }
    cout<<endl;
    return 0;
}
