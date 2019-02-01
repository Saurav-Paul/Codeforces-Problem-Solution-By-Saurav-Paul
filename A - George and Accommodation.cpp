#include<iostream>
using namespace std;
int main(){
int n,x,y,cnt=0;
cin>>n;
while(n--){
    cin>>x>>y;
    if(y-x>1)
        cnt++;
}
cout<<cnt<<endl;
return 0;
}
