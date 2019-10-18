				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ; scanf("%d",&n) ;

    vector< vector<int > > grid(n,vector<int> (n));
    int temp = n ;
    bool ok = true ;
    int x = 1;
    int y = 0 ;
    while(temp --){
        if(ok)
            for(int i = 0 ; i < n ; i++){
                grid[i][y] = x ++;
            }
        else{
            for(int i = n-1 ; i >= 0 ; i--){
                grid[i][y] = x ++;
            }
        }
        y++ ;
        ok ^= 1 ;
    }

    for(int i = 0 ;  i < n ; i++){
        for(int j = 0 ; j < n; j++){
            printf("%d ",grid[i][j] );
        }
        puts("");
    }

    return 0;
}
