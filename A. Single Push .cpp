
// Problem : A. Single Push
// Contest : Codeforces Round #600 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1253/A
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);


void solve(){
   int n ; cin >> n;
   vector<int> v(n) , t(n);
   for(auto &x : v) cin >> x;
   for(auto &x : t) cin >> x;
   
   int diff = 0 ;
   
   for(int i = 0 ; i < n ; i ++){
       if(v[i] != t[i]){
           int x = t[i] - v[i] ;
           if(x < 0){
               diff = 10 ;
               break ;
           }
           diff ++;
           for(int j = i ; j < n ; j ++){
               i = j ;
               if(v[j]==t[j]) break ;
               if(t[i]-v[i] != x){
                   diff = 10 ;
                   break ;
               }

           }
           
       }    
   }

   if(diff < 2) cout <<"YES" << endl ;
   else cout << "NO" << endl ;
    
}

int main()
{
    boost ;
    int t ; 
    cin >> t;
    while(t--)
        solve () ;
    return 0;
}
