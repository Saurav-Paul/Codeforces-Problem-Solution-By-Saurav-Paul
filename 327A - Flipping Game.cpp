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
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
int mem[105];
std::vector<ll> vec;
void dp(ll n){
    mem[0]=vec[0];
    for(int i=1; i< n ; i++){
        mem[i]=vec[i]+mem[i-1];
    }
}
int main()
{

    FAST_IO();
    ////////////////////////
    
    int n,temp,cnt=0;
    cin>>n;
    for(int i=0; i<n ; i++){
        cin>>temp;
        vec.pb(temp);
        if(temp)
            cnt++;
    }
    dp(n);
    ll ans=0;
    for(int i=0; i< n ; i++){
        if(i)
        for(int j=i; j< n ; j++){
            ll elmnt=j-i+1;
            ll temp=mem[j]-mem[i-1];
            temp=(elmnt-temp)+(cnt-temp);
            ans=max(ans,temp);
        }
        else{
            ans=(cnt-mem[i])+(1-mem[i]);
            ll temp=mem[n-1];
            temp=(n-temp)+(cnt-temp);
            ans=max(ans,temp);
        }
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
