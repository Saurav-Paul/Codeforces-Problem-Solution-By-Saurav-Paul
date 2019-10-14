                /*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int > ;

int main() {
    int n , per_day , need_break ;
    scanf("%d%d%d",&n,&per_day,&need_break) ;

    map<int,int> Map ;
    set<int> Set;
    vector<int> v(n);
    for(int i = 0; i < n ; i++){
        scanf("%d",&v[i]);
        Map[v[i] ] = i ;
    }
    sort(v.begin() , v.end() ) ;
    vector<int> ans(n);
    int day = 0;
    for(auto x : v){
        auto it = Set.lower_bound(x-need_break);
        if(Set.size()==0 || it==Set.begin()){
            ans[Map[x]] = ++day ;
        }
        else{
            it --;
            int value = *it ;
            Set.erase(value) ;
            ans[Map[x]] = ans[Map[value] ];
        }
        Set.insert(x) ;
    }
    printf("%d\n",day);
    for(auto x : ans) printf("%d ",x);
    puts("");

    return 0 ;
}
