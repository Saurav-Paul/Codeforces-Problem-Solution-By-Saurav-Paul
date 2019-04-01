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
const ll INF = 2e18 + 99;
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
    ll n; cin>>n;
    string s; cin>>s;
    vll mem(n+2,0);
    mem[1]=s[0]-'0';
    for(int i=1; i< n ; i++){
        mem[i+1]=mem[i]+(s[i]-'0');
    }

    bool flag = false ,check=false;
    for(int i=1; i< n ; i++){
        ll temp=mem[i];
        ll index=i;
        check=false ;
        for(int j=i+1 ;j<=n ; j++){
            ll t=mem[j]-mem[index];
            if(t==temp){
                index=j;
                check=true ;
            }
            if(j==n){
                 if((t==temp || t==0 )&& check){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }

        }
    }
    cout<<"NO"<<endl;

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
