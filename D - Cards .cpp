
/**
 *    author        : Saurav Paul 
 *    created       : August 31, 2020 10:22 AM
 *    Problem Name  : D - Cards
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/205/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N ;
    map<int,int> cnt , a , b;
    public :
    void solve(){
        cin >> N ;

        for(int i = 0 ; i < N ; i++){
            int u , v;
            cin >> u >> v;
            cnt[u] ++ ;
            a[u] ++ ;
            b[v] ++ ;
            if(u!=v) cnt[v] ++ ;

        }
        int need = (N+1) / 2;

        bool ok = false ;
        ll ans = N ;
        for(auto x : cnt){
            if(x.second >= need){
                int color = x.first ;
                int ase = x.second ;
                ok = true ;
                if(a[color] >= need){
                    ans = 0 ;
                    continue ;
                }
                ll t = min(need-a[color],b[color]) ;
                ans = min({ans,t}) ;
            }
        }

        cout << (ok?ans:-1) << endl ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
