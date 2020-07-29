
/**
 *    author        : Saurav Paul 
 *    created       : July 29, 2020 11:20 AM
 *    Problem Name  : A. Three Indices
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1380/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n ;
    cin >> n ;

    vector<int> v(n) ;
    for(auto &x : v){
        cin >> x;
    }

    vector<int>  leftmin(n), rightmin(n) ;
    for(int i = 0  ; i < n; i++){
        if(i)
            leftmin[i] = min(leftmin[i-1],v[i]) ;
        else
            leftmin[i] = v[i] ;
    }
    for(int i = n-1 ; i >= 0 ; i--){
        if(i == n-1)
            rightmin[i] = v[i] ;
        else
            rightmin[i] = min(rightmin[i+1], v[i]) ;
    }
    for(int i = 1 ; i < n -1 ; i++){
        if(v[i] > max(leftmin[i],rightmin[i])){
            cout << "YES" << endl ;
            for(int j = i - 1; j >= 0 ; j--){
                if(v[j] == leftmin[i]){
                    cout << j + 1 << " " ;
                    break ;
                }
            }
            cout << i + 1 << " " ;
            for(int j = i + 1; j < n; j++){
                if(v[j] == rightmin[i]){
                    cout << j + 1 <<endl ;
                    break ;
                }
            }
            return ;
        }
    }
    cout << "NO" << endl ;
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
