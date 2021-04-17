
/**
 *    author        : Saurav Paul 
 *    created       : February 21, 2021 9:30 AM
 *    Problem Name  : B - Fox Dividing Cheese
 *    Problem Limit : 1000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll a , b ; cin >> a >> b ;
        ll two = 0 , three = 0 , five = 0 ;
        ll aa = f(a,5,five) ;
        aa = f(aa , 3 , three) ;
        aa = f(aa , 2 , two) ;

        ll bb = f(b,5,five , - 1) ;
        bb = f(bb, 3, three , -1) ;
        bb = f(bb , 2 , two , - 1) ;

        if(aa != bb){
            cout << -1 << endl ;
        }
        else{
            cout << abs(two) + abs(three) + abs(five) << endl ;
        }

    }

    ll f(ll no , ll num , ll &var , ll factor = 1){
        while(no % num == 0){
            no /= num ;
            var += (factor) ;
        }
        return no ;
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
