

/**
 *    author:  Saurav_Paul 
 *    created: 15.04.2020 21:08:05       
**/

#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back

using ll = long long ;
bool check[300000]={};
ll mx=0;
vector<ll> path[300000+5];
vector<ll> lev;
#define bug()				  debug() <<
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif

ll dfs(ll n, ll take) ;
int main()
{
    ll n, k, i, j;
    cin>>n>>k;
    for(i=1; i<n; i++){
        ll u, v;
        cin>>u>>v;
        path[u].eb(v);
        path[v].eb(u);
    }
    ll keep=dfs(1, 0);
    ll ans=0;
    sort(lev.begin(),lev.end(),greater<ll>()) ;
    for(int i = 0 ; i < k ; i++){
        ans += lev[i] ;
    }

    cout<<ans<<endl;

    return 0;
}

ll dfs(ll n, ll take){
    mx=max(mx, take);
    ll i, j, k;
    check[n]=true;
    ll limit=path[n].size(), keep=0;
    for(i=0; i<limit; i++){
        ll x=path[n][i];
        if(check[x]==false){
            keep+=dfs(x, take+1);
        }
    }
    lev.eb(take-keep);
    return keep+1;
}
