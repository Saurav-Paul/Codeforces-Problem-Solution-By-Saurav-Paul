
/**
 *    author        : Saurav Paul 
 *    created       : January 17, 2021 9:19 AM
 *    Problem Name  : C - Cinema
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/417942#problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int person , movies ;
        cin >> person ;
        map<int,int> knownBy ;
        for(int i = 0 ; i < person ; i++){
            int x ; cin >> x;
            knownBy[x] ++ ;
        }

        int ans = -1 , high =-1 , low =-1 ;

        cin >> movies ;

        vector<int> vaa(movies) , vbb(movies) ;
        for(auto &x : vaa){
            cin >> x;
        }
        for(auto &x : vbb){
            cin >> x;
        }

        for(int i = 0 ; i < movies ; i++){
            int a = vaa[i] , b = vbb[i] ;
            int va = knownBy[a] ;
            int vb = knownBy[b] ;

            if(va == high){
                if(vb > low){
                    ans = i + 1;
                    high = va ;
                    low = vb ;
                }
            }
            else if(va > high){
                ans = i + 1;
                high = va ;
                low = vb ;
            }
        }

        cout << ans << endl ;

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
