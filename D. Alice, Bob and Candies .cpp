
/**
 *    author:  Saurav_Paul 
 *    created: 09.05.2020 21:04:25       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long int n ;
    cin >> n;
    vector< long long int > v(n) ;
    for(auto &x : v){
        cin >> x;
    }

    long long int move = 0 , a = 0 , b = 0 , t = 0;

    for(int i = 0 , j = n-1; i <= j ;){

        long long int target = 0 ;
        long long int temp = 0 ;

        if(move & 1){
            for( ; i <= j ; j--){
                if(temp > t){
                    break ;
                }
                temp += v[j] ;
            }
            b += temp ;
        }
        else{
            for( ; i <= j ; i++){
                if(temp > t){
                    break ;
                }
                temp += v[i] ;
            }
            a += temp ;
        }
        t = temp ;
        ++ move ;

    }
    cout << move << " " << a << " " << b << endl ;
    
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
