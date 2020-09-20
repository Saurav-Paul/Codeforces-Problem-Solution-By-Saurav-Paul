
/**
 *    author        : Saurav-Paul 
 *    created       : September 20, 2020 10:05 AM
 *    Problem Name  : E - Sage's Birthday (hard version)
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/1419/problem/D2
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class TC{

    int N ;
    vector<int> ice_spheres;
    public :
    void solve(){

        cin >> N ;

        ice_spheres.assign(N,0) ;
        vector<int> v(N) ;

        for(int &x : v){
            cin >> x;
        }

        sort(v.begin(),v.end()) ;

        int cur = 0 ;
        for(int i = 1 ; i < N ; i+= 2){
            ice_spheres[i] = v[cur++] ;
        }
        for(int i = 0 ; i < N ; i+= 2){
            ice_spheres[i] = v[cur++] ;
        }


        int ans = 0 ;

        for(int i = 1; i < N -1 ; i++){
            if(ice_spheres[i] < ice_spheres[i-1] && ice_spheres[i] < ice_spheres[i+1]) ++ans ;
        }
        cout << ans << endl ;
        for(auto x : ice_spheres) cout << x << " " ;
        cout << endl ;

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
