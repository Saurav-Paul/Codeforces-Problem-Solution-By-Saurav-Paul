
/**
 *    author        : Saurav Paul 
 *    created       : September 06, 2020 9:32 AM
 *    Problem Name  : A - Jeff and Digits
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://vjudge.net/contest/393057#problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){

        int N ;
        cin >> N ;
        int five = 0 , zero = 0 ;
        for(int i = 0 ; i < N ; i++){
            int num ;
            cin >> num ;
            if(num == 5) five ++ ;
            else zero ++ ;
        }

        if(zero == 0){
            cout << - 1<< endl ;
            return ;
        }

        string ans = "" ;

        long long sum = 0 ;
        long long can_take = 0 ;

        for(int i = 0 ; i < five ; i++){
            sum += 5 ;
            if(sum % 9 == 0){
                can_take = i + 1;
            }
        }

        if(can_take == 0){
            cout << 0 << endl ;
            return ;
        }

        ans = string(can_take,'5') + string(zero,'0') ;

        cout << ans << endl ; 

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
