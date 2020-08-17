
/**
 *    author        : Saurav Paul 
 *    created       : August 12, 2020 10:01 PM
 *    Problem Name  : C. Boboniu and Bit Operations
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1395/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

bool check(int a, int b , int target){
    int new_number = (a&b) ;
    return (target == (target|new_number)) ;
}

void solve(){
    int n , m;
    cin >> n >> m;

    vector<int> a(n) , b(m) ;
    for(auto &x : a){
        cin >> x;
    }
    for(auto &x : b){
        cin >> x ;
    }

    for(int mask = 0 ; mask <= 1024 ; mask ++){
        bool ok = true ;

        for(auto f : a){
            bool local_ok = false ;
            for(auto s : b){
                if(check(f,s,mask)){
                    local_ok = true ;
                    break ;
                }
            }
            ok &= local_ok ;
            if(!local_ok) break ;
        }

        if(ok){
            cout << mask << endl ;
            return ;
        }
    }
    assert(false) ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase = 1;
    for(int i = 1 ; i <= testcase ; i ++){
        solve();
    }

    return 0 ;
}
