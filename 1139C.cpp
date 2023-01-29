#include<bits/stdc++.h>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 1000000
#define ll long long
#define db double
#define pb push_back
#define For(i,s,e) for (ll i=(s); i<(e); i++)
#define Debug_array(a,n) for (ll i=(0); i<(n); i++) cout<<a[i]<<" "
#define Foe(i,s,e) for (ll i=(s); i<=(e); i++)
#define Fod(i,s,e) for (ll i=(s)-1; i>=(e); i--)
#define all(v) v.begin(),v.end()
#define vll vector<ll>
#define vs vector<string>
 
#define mapll map<ll,ll>
#define mapss map<string,string>
#define mapsl map<string,ll>
#define mapls map<ll,string>
 
#define pll pair<ll,ll>
#define pss pair<string,string>
#define psl pair<ll,string>
#define pls pair<string,ll>
 
#define minheap priority_queue<ll>
#define maxheap priority_queue<ll,vector<ll> ,greater<ll>>
 
#define ff first
#define ss second
#define endl "\n"
#define mp make_pair
#define big_prime 15486277
#define bigger_prime 179424697
#define biggest_prime 32416188691
const ll mod=1e9 + 7;
 
 
ll takemod(ll a) {
    return ((a%mod)+mod)%mod;
}
 
ll gcd(ll a, ll b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);        
}
 
ll fast_exp(ll base, ll expo) {
    ll res=1;
    while(expo>0) {
        if(expo&1) res=(res*base)%mod;
        base=(base*base)%mod;
        expo>>=1;}
    return res;
}
 
ll modinv(ll a) {
    return takemod(fast_exp(takemod(a), mod-2));
}
vector<pll> graph[100005];
ll visited[100005];
ll n,k,ans=0,finalans;
void dfs(ll index)
{
    visited[index]=1;
    ans++;
    for(pll a: graph[index])
    {
        if(visited[a.ff]==-1 and a.ss==0)
        {
            dfs(a.ff);
        }
    }   
}
//unordered_map<ll,ll> umap1[100005];
signed main() 
{
    fast_cin();
    memset(visited,-1,sizeof(visited));
    cin>>n>>k;
    finalans=fast_exp(n,k);
    For(i,0,n-1)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        graph[a].pb(mp(b,c));
        graph[b].pb(mp(a,c));
    }
    For(i,1,n+1)
    {
        if(visited[i]==-1)
        {
            dfs(i);
            //cout<<ans<<endl;
            finalans=((finalans-fast_exp(ans,k))+mod)%mod;
            ans=0;
        }
    }
    cout<<finalans<<endl;
    return 0;    
}
