#include<iostream>
using namespace std;
int main(){
int n,j,i,ans=0;
cin>>n;
while(n--){
int temp=0;
i=3;
while(i--){
cin>>j;
temp+=j;
}
if(temp>1)
    ans++;
}
cout<<ans<<endl;
return 0;
}
