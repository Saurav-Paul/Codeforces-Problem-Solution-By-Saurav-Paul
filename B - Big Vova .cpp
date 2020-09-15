
/**
 *    author        : Saurav Paul 
 *    created       : September 13, 2020 9:19 AM
 *    Problem Name  : B - Big Vova
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N ;

        vector<int> v(N) , ans, vis(N+10 , false);

        int mx = 0 ;
        for(auto &x : v){
            cin >> x;
            mx = max(mx,x) ;
        }
        int prv = 0 ;
        for(int i = 0 ; i < N ; i++){

            int rem = - 1, gd = -1 ;
            for(int j = 0; j < N ; j++){
                if(vis[j] == false){
                    int Gcd = __gcd(v[j],prv) ;

                    if(Gcd > gd){
                        gd = Gcd ;
                        rem = j ;
                    }
                }
            }

            vis[rem] = 1 ;
            ans.push_back(v[rem]);
            prv = gd ;
        }

        for(auto x : ans){
            cout << x <<" " ;
        }

        cout << endl ;



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
