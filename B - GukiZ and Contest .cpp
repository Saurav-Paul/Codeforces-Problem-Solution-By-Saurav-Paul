
/**
 *    author        : Saurav Paul 
 *    created       : December 12, 2020 9:31 PM
 *    Problem Name  : B - GukiZ and Contest
 *    Problem Limit : 2000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/551/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n; 

        vector<pair<int,int>> stud ;
        int last = 0 ;
        for(int i = 0; i < n ; i++){
            int x ; cin >> x ;
            stud.push_back(make_pair(x,i)) ;
            last = max(last,x) ;
        }

        sort(stud.begin(), stud.end(), greater<pair<int,int>>()) ;
        int rating = 1 ;

        vector<int> standing(n) ;

        int cnt = 0 ;
        for(auto x : stud){
            if(last != x.first){
                rating += cnt ;
                cnt = 0 ;
                last = x.first ;
            }

            cnt ++ ;

            standing[x.second] = rating ;
        }

        for(auto x : standing)
            cout << x << " " ;
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
