#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
int power[1000];
int sindex[1000];
std::vector<ll> schl[1000];
std::vector<ll> need;
int main()
{

    FAST_IO();
    ////////////////////////
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>power[i];
    }
    for(int i=1;i<=n;i++){
        ll temp;
        cin>>temp;
        schl[temp].pb(i);
        sindex[i]=temp;
    }
    for(int i=1;i<=k;i++){
        ll temp;
        cin>>temp;
        need.pb(temp);
    }
    ll sz=need.size();
    ll ans=0;
    for(int i=0;i<sz;i++){
        ll find=need[i];
        ll target=sindex[find];
        
        ll done=schl[target].size();
        for(int j=0;j<done;j++){

            ll stdnt= schl[target][j];
            if(find==stdnt)
                continue ;
            if(power[stdnt]>= power[find])
                {ans++;
                    break ;}

        }

    }
    cout<<ans<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
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
