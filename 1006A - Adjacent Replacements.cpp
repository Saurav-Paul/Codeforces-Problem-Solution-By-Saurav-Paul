#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
scanf("%d",&n);
int temp;
for(int i=0;i<n; i++){
    scanf("%d",&temp);
    if(temp&1){
        printf("%d ",temp);
    }else{
        printf("%d ",temp-1);
    }
}
puts("");
return 0;
}
