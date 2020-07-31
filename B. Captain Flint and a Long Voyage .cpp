
/**
 *    author        : Saurav Paul 
 *    created       : July 30, 2020 8:50 PM
 *    Problem Name  : B. Captain Flint and a Long Voyage
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1388/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    int temp = ceil((double)n/4) ;
    cout <<string(n-temp,'9') + string(temp,'8') << endl ; 
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
