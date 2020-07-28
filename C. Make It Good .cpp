
/**
 *    author        : Saurav Paul 
 *    created       : July 28, 2020 12:56 PM
 *    Problem Name  : C. Make It Good
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1385/problem/C
 *    @genarated by ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

bool is_ok(vector<int> &v , int p){
    int n = v.size()-1 ;

    int st = 0 ;
    while(p <= n){
        
        if(p == n){
            if(v[p] < st)
                return false ;
            p ++ ;
        }
        else if(v[p] <v[n]){
            if(v[p] < st)
                return false ;
            st = v[p] ;
            p ++ ;
        }
        else if(v[p] >= v[n]){
           if(v[n] < st) 
               return false ;
           st = v[n] ;
           n -- ;
        }
        else
            assert(false) ;
    }

    return true ;
}

void solve(){
    int n ;
    cin >> n;

    vector<int>v(n) ;
    for(auto &x : v){
        cin >> x;
    }

    bool ok = true ;

    int low = 0 , high = n - 1;

    while(low < high){
        int mid = (low + high) >> 1 ;

        if (is_ok(v,mid)){
            high = mid ;
        }
        else{
            low = mid + 1 ;
        }

    }

    cout <<  low << endl ;


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
