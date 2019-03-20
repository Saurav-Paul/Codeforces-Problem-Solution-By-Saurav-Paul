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
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n,m,temp;
    cin>>n;
    std::vector<ll> v,u;;
    for(int i=0; i< n; i++)
        cin>>temp,u.pb(temp);
    v=u;
    sort(all(u));
    ll sz=u.size();
    
    for(int i=1; i<sz; i++){
        u[i]=u[i-1]+u[i];
        v[i]=v[i-1]+v[i];
    }

    cin>>m;
    while(m--){
        ll l,r,type;
        cin>>type>>l>>r;
        l--;
        r--;
        if(type==1){
            if(l==0)
                cout<<v[r]<<endl;
            else
            cout<<v[r]-v[l-1]<<endl;
        }
        else
        {
            if(l==0)
                cout<<u[r]<<endl;
            else
            cout<<u[r]-u[l-1]<<endl;
        }
    }
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
