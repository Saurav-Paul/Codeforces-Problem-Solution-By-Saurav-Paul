
/**
 *    author:  Saurav_Paul 
 *    created: 23.04.2020 21:04:43       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n , k ;
    cin >> n >> k ;
    vector<long long > v(n) ;
    for(auto &x : v){
        cin >> x;
    }
    vector<long long > peak(n, 0) ;
    for(int i =1 ; i < n ; i++){
        if(v[i]>v[i-1] && v[i] > v[i+1]){
            peak[i] = 1;
        }
    }

    long long np = 0 ;
    for(int i = 0 ;i < k ; i++){
        if(peak[i]==1){
            np++;
        }
    }

    long long id = -1 , mx = -INT_MAX ;
    for(int i = 0 , j = k-1 ;j < n ; i++, j++ ){
        long long ex = 0 ;
        if(peak[i]==1){
            ex ++;
        }
        if(peak[j]==1){
            ex ++ ;
        }
        if(np-ex>mx){
            mx = np-ex ;
            id = i + 1;
        }
        if(j < n-1){
            if(peak[i]==1){
                np--;
            }
            if(peak[j+1]==1){
                np ++ ;
            }
        }
    }
    cout << mx+1 << " " << id << endl ;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
