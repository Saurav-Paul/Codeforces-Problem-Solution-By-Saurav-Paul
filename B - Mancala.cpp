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
    vll all,work;
    for(int i=0,temp ; i<14 ;i++)
        cin>>temp, all.pb(temp);
    ll ans=0; 
    for(int i=0; i<14 ; i++){
        if(all[i]<1)
            continue ;
        ll temp=all[i]/14;
        ll extra=all[i]%14;
        work=all;
        work[i]=0;
        for(int i=0; i<14 ; i++)
            work[i]+=temp;
        ll j=i;

        while(extra--){
            j++;
            if(j==14)
                j=0;
            work[j]++;
        }
        ll cnt=0;
        for(int i=0; i<14 ; i++){
            if(work[i]%2==0)
                cnt+=work[i];
        }
        ans=max(ans,cnt);
      
    }
    cout<<ans<<endl;
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
