
/**
 *    author        : Saurav Paul 
 *    created       : August 31, 2020 9:31 AM
 *    Problem Name  : A - Rozdil
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/205/problem/a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ;
        cin >> n;
        map<int,int> cnt, pos ;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            pos[x] = i ;
            cnt[x] ++ ;
        }
        for(auto x : cnt){
            if(x.second == 1){
                cout << pos[x.first] + 1 << endl ; 
            }
            else{
                cout << "Still Rozdil" << endl ;
            }
            break ;
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
