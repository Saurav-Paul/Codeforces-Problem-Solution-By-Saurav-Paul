
/**
 *    author        : Saurav Paul 
 *    created       : September 04, 2020 9:52 PM
 *    Problem Name  : E. Two Platforms
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/e
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    ll n , k;
    vector<pair<ll,ll>> v ;
    public :
    void solve(){

        cin >> n >> k ;
        v.assign(n,{0,0}) ;
        for(int i = 0 ; i < n; i++){
            cin >> v[i].first ;
        }
        for(int i = 0 ; i < n; i++){
            cin >> v[i].second ;
        }

        sort(v.begin(),v.end()) ;

        vector<ll> prefix(n) , sufix(n) ;

        for(int i = 0, st_point = 0, cnt = 0, last = 0; i < n ; i++){
            int curr_point = v[st_point].first + k ;
            int point = v[i].first ;
            if(curr_point >= point){
                cnt ++ ;
            }
            else{
                while(curr_point < point){
                    cnt -- ;
                    st_point ++ ;
                    curr_point = v[st_point].first + k ;
                }
                cnt ++ ;
            }

            prefix[i] = max(last,cnt) ;
            last = prefix[i] ;
        }

        reverse(v.begin(), v.end()) ;
        
        for(int i = 0, st_point = 0, cnt = 0, last = 0; i < n ; i++){
            int curr_point = v[st_point].first - k ;
            int point = v[i].first ;
            if(curr_point <= point){
                cnt ++ ;
            }
            else{
                while(curr_point > point){
                    cnt -- ;
                    st_point ++ ;
                    curr_point = v[st_point].first - k ;
                }
                cnt ++ ;
            }

            sufix[i] = max(last,cnt) ;
            last = sufix[i] ;
        }

        reverse(sufix.begin(),sufix.end() ) ;
        sufix.push_back(0) ;

        ll mx = 0 ;
        for(int i = 0 ; i < n ; i++){
            mx = max(mx,prefix[i]+sufix[i+1]) ;
        }

        cout << mx << endl ;

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
