#include<iostream>
using namespace std;
int main(){
int ara[500];
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int temp;
    cin>>temp;
    ara[temp]=i;
}
for(int i=1;i<=n;i++){
    cout<<ara[i]<<" ";
}
cout<<endl;
return 0;
}
