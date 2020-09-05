
/**
 *    author        : Saurav Paul 
 *    created       : September 04, 2020 9:11 PM
 *    Problem Name  : D. Decrease the Sum of Digits
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1409/problem/d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    ll s , cnt , total ;
    string n ;

    public :
    void solve(){
        cin >> n >> s;

        total = 0 ;
        cnt = n.size() - 1 ;

        ll sum = cnt_sum() ;
        if(sum <= s){
            cout << 0 << endl ;
            return ;
        }
        reverse(n.begin(),n.end()) ;

        int ten = -1 ;
        for(int i = 0 ;i < (int)n.size() ; i++){
            ten ++ ;
            int curr = n[i] - '0' ;
            if(curr == 0) continue ;
            int need_to_add = 10 - curr ;
            ll temp = need_to_add ;
            for(int j = 0 ; j < ten ; j++){
                temp *= 10 ;
            }
            total = temp + total ;
            n[i] = '0' ;

            // need to add 1 to the next number 
            bool added = false ;
            for(int j = i+1 ; j < (int)n.size() ; j++){
                curr = n[j] - '0' ;
                if(curr < 9){
                    n[j] = curr + 1 + '0' ;
                    added = true ;
                    break ;
                }
                else{
                    n[j] = '0' ;
                }
            }
            if(added == false) n.push_back('1') ;

            if(cnt_sum() <= s) break ;

        }

        cout << total << endl ;
    }

    ll cnt_sum(){
        ll sum = 0 ;
        for(auto x : n) sum += x-'0' ;
        return sum ;
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
