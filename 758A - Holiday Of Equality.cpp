#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define tcase()                ll t; scanf("%lld",&t); while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans,temp,maximum=0,total=0;
    cin>>n;
    loop(i,0,n)
    {
        cin>>temp;
        total+=temp;
        maximum=max(temp,maximum);
    }
    cout<<n*maximum-total<<nl;
    return 0;
}
