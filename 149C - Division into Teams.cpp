#include<bits/stdc++.h>
using namespace std;
using vec = vector< pair<int,int> > ;

int main(){

    int n;
    scanf("%d",&n);
    vec v(n);

    for(int i = 0 ; i < n; i++){
        scanf("%d",&v[i].first);
        v[i].second = i+1;
    }

    sort(v.begin(),v.end());

    int f= n/2 + (n&1);
    printf("%d\n",f);

    for(int i = 0 ; i < n ; i+=2){
        printf("%d ",v[i].second);
    }

    printf("\n%d\n",n/2);

    for(int i = 1 ; i < n ; i+=2){
        printf("%d ",v[i].second);
    }
    puts("");
    return 0;
}
