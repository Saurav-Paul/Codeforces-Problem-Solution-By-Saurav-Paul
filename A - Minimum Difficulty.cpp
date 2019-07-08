#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d",&n);
    vector <int > v(n);
    for(int &x : v)
        scanf("%d",&x);
 
    int mx = 0;
    for(int i = 1 ; i < n; i++){
        mx = max(mx,v[i]-v[i-1]);
    }
    int mn = mx;
    mx = INT_MAX;
    for(int i = 1 ; i < n-1 ; i++){
        if(v[i+1]-v[i-1]<=mn){
            printf("%d\n",mn);
            return 0;
        }
        else{
            mx = min(mx, v[i+1]-v[i-1]);
        }
 
    }
 
    printf("%d\n",mx);
 
    return 0;
}
