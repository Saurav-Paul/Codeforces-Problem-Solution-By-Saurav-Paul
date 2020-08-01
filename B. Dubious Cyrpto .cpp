
/**
 *    author        : Saurav Paul 
 *    created       : August 01, 2020 12:56 PM
 *    Problem Name  : B. Dubious Cyrpto
 *    Problem Limit : 1000 ms , 512 MB
 *    Problem Url   : https://codeforces.com/contest/1379/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

bool check(long long a, long long b , long long c, long long m,long long l , long long r){

    if( m - (b-c) != 0 ){
        if( (m-(b-c)) % a == 0 ){
            cout << a << " " << b << " " << c << endl;
            return true ;
        }
    }
    swap(b,c) ;
    if(m - (b-c) != 0){
        if( (m-(b-c)) % a == 0 ){
            cout << a << " " << b << " " << c << endl;
            return true ;
        }
    }
    return false ;

}

void solve(){

    long long l , r , m , a , b , c , n ;
    cin >> l >> r >> m ;

    /* n = (m - (b-c)) / a */ 

    long long diff = r - l ;

    for(long long i = l ; i <= r ; i++){

        a = i ;
        long long md = m % a ;
        if(md <= diff){
            b = r ;
            c = r - md ;
            if(check(a,b,c,m,l,r))
                return ;
        }


        if( (a - md) <= diff ){
            b = r ;
            c = r - (a-md) ;
            if(check(a,b,c,m,l,r))
                return ;
        }
    }

    assert(false) ;

}

int main(){
    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }
    return 0 ;
}
