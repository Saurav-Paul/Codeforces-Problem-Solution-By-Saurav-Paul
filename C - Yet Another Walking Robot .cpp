
/**
 *    author:  Saurav_Paul 
 *    created: 04.02.2020 21:25:31       
**/

#include<bits/stdc++.h>
using namespace std;

using pii = pair<int,int> ;
void solve() {

    long long int n ;
    cin >> n ;
    string s ;
    cin >> s;
    map <pii,long long int> mp ;
    mp[{0,0}] = 0;
    long long int x = 0 , y = 0;
    long long int diff = INT_MAX ;
    long long int a= -1 , b= -1 ;
   
    for(int i = 0 ; i < n ;i++){
        char c = s[i] ;
        
        if(c=='U') y++;
        else if(c=='D')y--;
        else if(c=='L')x--;
        else if(c=='R')x++;
        pii p = {x,y} ;
        if(mp.count(p)>0){
            long long int nt = i + 1;
            long long int last = mp[p] ;
           
            if(nt - last < diff){
             
                a = last+1 , b = nt ;
                diff = nt - last ;
            }
        }
       
        mp[p] = i + 1;

    }
    if(a != -1){
        cout << a << " " << b << endl ;
    }
    else
        cout << -1 << endl ;
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
