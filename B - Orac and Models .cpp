
/**
 *    author:  Saurav_Paul 
 *    created: 12.05.2020 20:31:26       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n;
    cin >> n;
    vector< long long int > vec(n) , dp(n);
    
    for(int i=0; i<n; i++)
        dp[i]=1;
        
    for(int i=0; i<n; i++)
            cin>>vec[i];
            
    for(int i=0; i<n; i++){
        
        long long int keep=i+1;
        
        for(int j=keep*2; j<=n; j+=keep){
            
            if(vec[j-1]>vec[i]){
                
                dp[j-1]=max(dp[j-1], dp[i]+1);
                
            }
        }
    } 
    long long int xxx=0;
    
    for(int i=0; i<n; i++)
        xxx=max(xxx, dp[i]);
        
    cout<<xxx<<endl;
}

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase ;
    for (int t = 1; t <= testcase; t++){
        solve();
    }

    return 0;
}
