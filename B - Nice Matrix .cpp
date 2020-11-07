
/**
 *    author        : Saurav Paul 
 *    created       : October 18, 2020 3:23 PM
 *    Problem Name  : B - Nice Matrix
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/1422/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;


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


using ll = long long int ;
const int nax = 105;
ll a[nax][nax] ;
ll b[nax][nax] ;


class TC{

    ll n, m ;
    public :
    void solve(){
        cin >> n >> m ;

        for(int i = 1; i <= n ; i++){
            for(int j = 1; j <= m ; j++){
                cin >> a[i][j] ;
                b[i][j] = a[i][j] ;
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m ; j++){

                set<pair<int,int>> nid ;
                nid.insert({i,j}) ;
                nid.insert({i,m-j+1}) ;
                nid.insert({n-i+1,j}) ;
                nid.insert({n-i+1,m-j+1}) ;
                vector<ll> v;

                if((int)nid.size() == 1) continue ;
                for(auto x : nid){
                    v.push_back(a[x.first][x.second]) ;
                }
                sort(v.begin(),v.end()) ;
                int sz = (int) v.size() ;

                a[i][j] = a[i][m-j+1] = a[n-i+1][j] = a[n-i+1][m-j+1] = v[sz/2] ;
            }
        }

        ll ans = 0 ;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1; j <= m; j++){
                ans += abs(a[i][j]-b[i][j]) ;
            }
        }

        cout << ans << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
