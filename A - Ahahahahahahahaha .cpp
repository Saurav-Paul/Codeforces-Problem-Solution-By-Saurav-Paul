 
/**
 *    author        : Saurav Paul 
 *    created       : September 13, 2020 9:00 AM
 *    Problem Name  : A - Ahahahahahahahaha
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/
 
#include<bits/stdc++.h>
using namespace std;
 
using ll = long long int ;
 
class TC{
 
    public :
    void solve(){
        int N;
 
        int zero = 0 , one = 0;
        cin >> N ;
        for(int i = 0 ; i < N; i++){
            int x;
            cin >> x;
 
            if(x == 0) zero ++ ;
            else if(x == 1) one ++ ;
        }
 
        int cnt = -1 ;
        int ans = -1 ;
        if(zero >= one){
            ans = 0 ;
            cnt = zero ;
        }
        else{
            ans = 1;
            cnt = one - (one&1) ;
        }
 
        cout << cnt << endl ;
        for(int i = 0 ; i < cnt ; i++){
            cout <<ans << " " ;
        }
        cout << endl ;
 
 
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
