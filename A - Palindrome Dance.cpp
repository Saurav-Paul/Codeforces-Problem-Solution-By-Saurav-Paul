#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll>Pair;
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n,a,b;
    std::vector<ll> c;
    cin>>n>>a>>b;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        c.pb(temp);
    }
    ll total=0;
    ll check=true;
    for(ll i=0;i<(n/2)+(n%2);i++)
    {
        //cout<<total<< " "<< c[i]<<" "<<c[n-i-1]<< " "<<endl;
        if(i==n-i-1)
        {
            if(c[i]==2)
                total+=min(a,b);
        }
        else if(c[i]==2)
        {
            if(c[n-1-i]==2)
            {
                total+=(2*min(a,b));
            }
            else if(c[n-1-i]==1)
                total+=b;
            else
                total+=a;

        }
        else
        {
            if(c[i]!=c[n-i-1] && c[n-i-1]!=2)
            {
                total=-1;
                break;
            }
            else if(c[n-i-1]==2 && c[i]==0)
                total+=a;
            else if(c[n-i-1]==2 && c[i]==1)
                total+=b;
        }
        //cout<<total<< " "<< c[i]<<" "<<c[n-i-1]<< " "<<endl;
    }
    cout<<total<<endl;

    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
