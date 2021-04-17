
/**
 *    author        : Saurav Paul 
 *    created       : January 31, 2021 9:15 AM
 *    Problem Name  : B - Eugeny and Play List
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n , m ;
        cin >> n >>m  ;
        vector<pair<int,int>> songs;

        for(int i = 0 ;i < n; i++){
            int c , t; cin >> c >> t;
            songs.push_back(make_pair(c,t)) ;
        }

        vector<int> liked(m);
        for(auto &x : liked){
            cin >> x;
        }

        long long tm = 0 ;
        int curr = -1 ;
        for(auto t : liked){
            while(t > tm){
                curr ++ ;
                tm += songs[curr].first * songs[curr].second ;
            }
            cout << curr + 1 << endl ;
        }

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
