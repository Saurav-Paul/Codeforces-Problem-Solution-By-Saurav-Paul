				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

long long int cal(long long int n){
    long long int mx = 0 , mn = 9 ;
    if(n == 0) return 0 ;
    while(n){
        mx = max(mx,n%10) ;
        mn = min(mn,n%10) ;
        n /= 10 ;
    }
    return mx*mn ;
}
bool is_zero(long long int n){
    
    while(n){
        if(n%10 == 0){
            return true ;
        }
        n /= 10 ;
    }

    return false ;
}

void solve() {

    long long int n , k ;
    cin >> n >> k;
    long long int last = 0 ;
    long long int st = n ;
    for(int i = 0 ; i < k-1 ; i++){
        st = st + cal(st) ;
        if(is_zero(st)){
            
            break ;
        }
    }
    cout << st << endl ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
