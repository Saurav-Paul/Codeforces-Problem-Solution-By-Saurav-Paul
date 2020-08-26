
/**
 *    author        : Saurav Paul 
 *    created       : August 25, 2020 8:35 PM
 *    Problem Name  : A. String Similarity
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1400/problem/0
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

void solve(){
    int n ;
    cin >> n;
    string s ;
    cin >> s;

    string t = string(n,s[n-1]) ;
    cout <<t << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        solve();
    }

    return 0 ;
}
