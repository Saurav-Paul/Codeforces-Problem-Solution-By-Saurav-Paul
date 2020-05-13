
/**
 *    author:  Saurav_Paul 
 *    created: 12.05.2020 19:56:34       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n , i , j , k ;
    cin>>n;
    
    cin>>k;
    long long int keep=n, v;
    for(i=2; i<=n; i++){
        if(n%i==0){
            v=i;
            break;
        }
    }
    k--;
    n+=v;
    n+=(2*k);
    cout<<n<<endl;
            
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
