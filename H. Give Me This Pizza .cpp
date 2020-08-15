
/**
 *    author        : Saurav Paul 
 *    created       : August 15, 2020 11:52 PM
 *    Problem Name  : H. Give Me This Pizza
 *    Problem Limit : 1000 ms , 256 MBc 
 *    Problem Url   : https://codeforces.com/problemset/gymProblem/101343/H
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    
    int N ;
    cin >> N ;
    vector<int> v(N) ;

    vector<vector<int>> number_position(50+1,vector<int>()) ; // 2d array

    for(int i = 0 ; i < N ; i++){
        cin >> v[i] ;
        number_position[v[i]].push_back(i+1) ; // pushing the index number according to the number
    }

    for(int i = 0 ; i < N ; i++){
        int ans = -1 , index = N ;
        for(int num = v[i] + 1 ; num <= 50 ; num ++){
            int id = upper_bound(number_position[num].begin(), number_position[num].end(),i+1) - number_position[num].begin();
            if(id < number_position[num].size()){
                if(ans == -1 || index > number_position[num][id]){
                    ans = num;
                    index = number_position[num][id] ; 
                }
            }
        }
        cout << ans << (i < N-1?" ": "\n") ;
    }

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
