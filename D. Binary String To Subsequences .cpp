
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 9:03 PM
 *    Problem Name  : D. Binary String To Subsequences
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1399/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s ;
    cin >> s ;

    vector<int> v(n) , one , zero ;
    int cnt = -1 ;

    for(int i = 0 ; i < n; i++){
        if(s[i] == '0'){
            if(one.size() == 0){
                cnt ++ ;
                zero.push_back(cnt) ;
                v[i] = cnt ;
            }
            else {
                int last = one.back() ;
                one.pop_back() ;
                zero.push_back(last) ;
                v[i] = last ;

            }
        }
        else{
            if(zero.size() == 0){
                cnt ++ ;
                one.push_back(cnt) ;
                v[i] = cnt ;
            }
            else{
                int last = zero.back() ;
                zero.pop_back()  ;
                one.push_back(last) ;
                v[i] = last ;
            }

        }
    }
    cout << cnt + 1 << endl ;
    for(auto x : v) cout << x + 1 << " " ;
    cout << endl ;

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
