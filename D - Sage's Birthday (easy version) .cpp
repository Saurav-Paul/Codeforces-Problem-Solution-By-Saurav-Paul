
/**
 *    author        : Saurav-Paul 
 *    created       : September 20, 2020 9:55 AM
 *    Problem Name  : D - Sage's Birthday (easy version)
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/1419/problem/D1
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N ;
    vector<int> ice_spheres;
    public :
    void solve(){

        cin >> N ;
        for(int i = 0 ; i < N ; i++){
            int x ; cin >> x;
            ice_spheres.push_back(x) ;
        }

        sort(ice_spheres.begin(),ice_spheres.end()) ;

        for(int i = 1 ; i < N-1 ; i+=2){
            swap(ice_spheres[i],ice_spheres[i-1]) ;
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
