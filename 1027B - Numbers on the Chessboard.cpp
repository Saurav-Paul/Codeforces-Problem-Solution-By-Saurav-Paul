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
typedef pair<ll,ll> Pair;
typedef vector<ll> vll;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n,m; cin>>n>>m;
    while(m--){
        ll x, y;
        ll ans=0;
        cin>>x>>y;
        if(n&1){

            if(x&1){
                if(y&1){
                    ans=(x-1)*((n/2)+(n&1)) +1 + (y/2)-((x-1)/2);
                }
                else{
                    ll temp=((n/2)+(n&1))*n+1;
                    ans=temp +(x-1)*((n/2)+(n&1))+ (y/2)-1 +x/2;
                    ans-=(n/2)+(x-1);

                }
            }
            else{
                if(y&1){
                    ll temp=((n/2)+(n&1))*n+1;
                     ans=(x-1)*((n/2)+(n&1)) + (y/2) +temp + (x-1)/2;
                     ans-=(n/2)+(x-1);
                }
                else{
                   ans=(x-1)*((n/2)+(n&1)) + (y/2)-((x-1)/2); 
                }
            }

        }
        else{
            if(x&1){
                if(y&1){
                    ans=(x-1)*((n/2)+(n&1)) +1 + (y/2);
                }
                else{
                    ll temp=((n/2)+(n&1))*n+1;
                    ans=temp +(x-1)*((n/2)+(n&1))+ (y/2)-1;
                }
            }
            else{
                if(y&1){
                    ll temp=((n/2)+(n&1))*n+1;
                     ans=(x-1)*((n/2)+(n&1)) + (y/2) +temp;
                }
                else{
                   ans=(x-1)*((n/2)+(n&1)) + (y/2); 
                }
            }
        }
        cout<<ans<<endl;
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
