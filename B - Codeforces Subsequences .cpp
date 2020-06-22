
/**
 *    author:  Saurav Paul 
 *    created: June 21, 2020 11:35 AM
 *    Problem Name : B. Codeforces Subsequences
 *    Problem Url : https://codeforces.com/contest/1368/problem/B
**/

#include<bits/stdc++.h>
using namespace std;

void solve(long long int n){
    long long cnt = 0;
    vector<int> v(10) ;
    long long int base = 0 ;
    string s = "codeforces" ;
    for(int i =1 ; ; i ++){
        long long int x = pow(i,10);
        if ( x > n){
            base = i - 1;
            break ;
        }
    }
    for(int i = 0 ; i < 10 ; i++){
        v[i] += base ;
    }
    if((long long) pow(base,10) < n)
        for(int i = 0 ; i < 10 ; i++){
            long long int x = pow(base+1,i+1) * pow(base,10-i-1) ;
            v[i] ++ ;
            if(x >= n){
                break ;
            }
        }
    int i = 0 ;
    for(auto x : v){
        for(int c = 0 ; c < x ; c++){
            cout << s[i] ;
        }
        i ++ ;
    }
    cout << endl ;

}

int main(){

    ios_base::sync_with_stdio(false);
    long long int n;
    cin >> n;
    solve(n);
    return 0;
}
