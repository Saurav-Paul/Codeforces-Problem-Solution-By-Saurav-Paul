
/**
 *    author        : Saurav Paul 
 *    created       : December 28, 2020 9:41 AM
 *    Problem Name  : C - Pearls in a Row
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; scanf("%d",&n) ;

    map<int,bool> rem ;
    vector<pair<int,int>> ans ;
    int st = 1 ;
    for(int i = 1; i <= n; i++){
        int x ; scanf("%d",&x) ;
        if(rem[x] == true){
            ans.push_back(make_pair(st,i)) ;
            st = i + 1;
            rem.clear() ;
        }
        else rem[x] = true ;
    }

    if(ans.size() == 0){
        puts("-1") ;
    }
    else{
        int sz = (int) ans.size() ;
        printf("%d\n",sz) ;
        for(int i = 0 ; i < sz ; i++){
            int f = ans[i].first ;
            int s = ans[i].second ;

            if(i == sz-1){
                s = n ;
            }

            printf("%d %d\n",f,s) ;
        }
    }

    return 0 ;
}
