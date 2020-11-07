
/**
 *    author        : Saurav Paul 
 *    created       : October 18, 2020 3:23 PM
 *    Problem Name  : A. Contest
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/problemset/problem/501/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;


class TC{

    public :
    void solve(){
        int a , b, c, d;
        cin >> a >> b >> c >> d;
        
        int misha = max( (3*a)/10 , a - ((a/250)*c)) ;
        int vsya= max( (3*b)/10 , b - ((b/250)*d)) ;
        
        if(misha == vsya) cout << "Tie" << endl ;
        else if( misha > vsya) cout <<"Misha" << endl;
        else cout << "Vasya" << endl ;
    

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
