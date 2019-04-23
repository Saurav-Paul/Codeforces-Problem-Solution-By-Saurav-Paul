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
#define dbg(x)                cout << #x << " = " << x << endl
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld ",&num);
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main()
{

    FAST_IO();
    ////////////////////////
    ll n,m,res; cin>>n>>m;
    vector<ll>interval ;
    ll temp,t; cin>>temp;
    res=temp;
    ll rem=temp;
    for(ll i=1; i<n; i++){
        cin>>t;
        interval.pb(t-temp);
        temp=t;

    }
    ll sz=interval.size();
    res=interval[0];
    for(int i=1; i< sz; i++){
        res=gcd(res,interval[i]);
    }
    // cout<<res<<endl;
    // for(auto i : interval)
    //     cout<<i<<endl;

    for(ll i=0; i<m ; i++){
        cin>>t;
        if(res%t==0){
            // printf("YES\n%lld %lld\n",rem,i+1);
            cout<<"YES"<<endl<<rem<<" "<<i+1<<endl;
            return 0;
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
    // ios_base::sync_with_stdio(0);
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
