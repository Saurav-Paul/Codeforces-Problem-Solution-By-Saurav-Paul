
/**
 *    author        : Saurav Paul 
 *    created       : July 05, 2020 8:24 PM
 *    Problem Name  : B. Multiply by 2, divide by 6
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1374/problem/B
**/

#include<bits/stdc++.h>
using namespace std;

/*
Idea : N only can be divide by 6 or we can multiply with 2. But, if we want to turn into 1, then we must have to devide it.
So , making it 1 we have only one option that is divide by 6.
6 = 3 * 2
So, we can always turn n into 1 if,
    n = 3x * 2y
    where, x must be greater or equal to 2.
    Because if y is less then x, it alwasy can be increased. But if y greater than x then it won't be possible to increase it.
    And we need x == y for turn n into 1.
*/

void solve(){

    long long int n ;
    cin >> n;
    if(n==1){
        cout << 0 << endl ;
        return ;
    }
    int two = 0 , three = 0;
    while(n%2==0){
        two ++ ;
        n /= 2;
    }
    while(n%3==0){
        three ++ ;
        n /= 3;
    }
    if(three >= two && n == 1){
        cout << 2 * three - two << endl ;
    }
    else{
        cout << -1 << endl; 
    }
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
