
/**
 *    author        : Saurav Paul 
 *    created       : March 21, 2021 9:23 AM
 *    Problem Name  : D - Powers Of Two
 *    Problem Limit : 4000 ms , 262 MB
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

class TC{

    public :
    void solve(){
        int n , k ;
        cin >> n >> k ;

        if(k > n) {
            cout << "NO" << endl ;
            return ;
        }

        if(k == 1){
            if(check(n)){
                cout << "YES" << endl << n << endl ;
            }
            else{
                cout << "NO" << endl ;
            }
            return ;
        }
        int one = k ;
        if(one == n){
            cout << "YES" << endl ;
            for(int i = 0 ;i  < one ; i++){
                cout << 1 << " " ;
            }
            cout << endl ;
            return ;
        }
        vector<ll> ans ;
        ll sum = 0 ;
        while((sum + one )!= n){
            -- one ;
            if(one == -1){
                cout << "NO" << endl ;
                return ;
            }
            ll temp = n - ( sum + one) ;
            bug() dbg(one) dbg(temp) dbg(sum) ;
            ll found = find_it(temp) ;
            sum += found ;
            ans.push_back(found) ;
            bug() dbg(ans) ;

        }

        cout << "YES" << endl ;
        for(auto x : ans){
            cout << x << " " ;
        }
        for(int i = 0 ; i < one ; i++){
            cout << 1 << " ";
        }
        cout << endl ;
    }

    ll find_it(ll temp){
        int base = 1 ;
        while(base * 2 <= temp){
            base *= 2;
        }
        return base ;
    }

    bool check(int n){

        while(n){
            if(n == 1) n = 0 ;
            else if(n % 2 == 0) n/=2 ;
            else return false ;
        }
        return true ;
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
