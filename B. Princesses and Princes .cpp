
/**
 *    author        : Saurav Paul 
 *    created       : September 15, 2020 9:45 PM
 *    Problem Name  : B. Princesses and Princes
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1327/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N ;
    vector<bool> married_p , married_g ;

    vector<int> baki ;

    public :
    void solve(){
        cin >> N ;

        married_p.assign(N+10, false) ;
        married_g.assign(N+10, false) ;
        for(int i = 0 ; i < N ; i++){
            int prince ;
            cin >> prince ;

            bool done = false ;
            for(int j = 0 ; j < prince ; j++){
                int p ; cin >> p ;

                if(married_p[p]) continue ;

                if(done == false){
                    married_p[p] = true ;
                    married_g[i+1] = true ;
                    done = true ;
                }

            }
            married_g[i+1] = done ;

        }

        int unmarried_g = -1 , unmarried_b = -1 ;

        for(int i = 1; i <= N ; i++){
            if(married_g[i] == false) {
                unmarried_g = i ;
            }
            if(married_p[i] == false){
                unmarried_b = i ;
            }
        }

        if((unmarried_b!= -1) && (unmarried_g != -1)){
            cout << "IMPROVE" << endl ;
            cout << unmarried_g << " " << unmarried_b << endl ;
        }
        else cout << "OPTIMAL" << endl ;

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
