#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; scanf("%d",&n);
    bool ok = true ;
    vector<int> newrating(n);
    for(int i = 0 ; i < n; i++){
        int x ; scanf("%d",&x);
        if(x&1){
            newrating[i] = (ok? floor((double)x/2) : ceil((double) x/2 ) );
            ok ^= 1 ;
        }
        else
            newrating[i] = x/2 ;
    }

    for(auto x : newrating){
        printf("%d\n",x);
    }
    return 0 ;
}
