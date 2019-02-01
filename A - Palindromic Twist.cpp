#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int t,n;
string s;
char c;
scanf("%d",&t);
while(t--){
    int flag=1,i,j;
   scanf("%d",&n);
   cin>>s;
   for(i=0, j=n-1;i<j;i++,j--){
    if((s[i]+1==s[j]+1) || (s[i]+1==s[j]-1) || (s[i]-1==s[j]+1) || (s[i]-1==s[j]-1)){
      continue ;
    }
    else {
        flag=0;
        break;
    }
   }
   if(flag){
    printf("YES\n");
   }
   else{
    printf("NO\n");
   }
}
return 0;
}
