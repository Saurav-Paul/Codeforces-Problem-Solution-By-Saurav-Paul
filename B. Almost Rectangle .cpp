/**
 *    author        : Saurav Paul 
 *    created       : April 10, 2021 8:39 PM
 *    Problem Name  : B. Almost Rectangle
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1512/problem/B
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
 
class TC{
 
    public :
    void solve(){
        int n ; cin >> n ;
        vector<string> v(n) ;
        vector<pair<int,int>> star , new_star ;
        for(auto &x : v){
            cin >> x;
        }
 
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n; j++){
                if(v[i][j] == '*'){
                    star.push_back(make_pair(i,j)) ;
                }
            }
        }
 
        if(star[0].first == star[1].first){
            if(star[0].first == 0){
                new_star.push_back(make_pair(n-1,star[0].second)) ;
                new_star.push_back(make_pair(n-1,star[1].second)) ;
            }
            else{
                new_star.push_back(make_pair(0,star[0].second)) ;
                new_star.push_back(make_pair(0,star[1].second)) ;
            }
        }
        else if(star[0].second == star[1].second){
            if(star[0].second == 0){
                new_star.push_back(make_pair(star[0].first,n-1)) ;
                new_star.push_back(make_pair(star[1].first,n-1)) ;
            }
            else{
                new_star.push_back(make_pair(star[0].first,0)) ;
                new_star.push_back(make_pair(star[1].first,0)) ;
            }
        }
        else{
            new_star.push_back(make_pair(star[0].first,star[1].second));
            new_star.push_back(make_pair(star[1].first,star[0].second)) ;
        }
 
        for(auto x : new_star){
            v[x.first][x.second] = '*' ;
        }
        for(auto x : v){
            cout << x << endl ;
        }
 
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
