#include<iostream>
using namespace std;
int main(){
int num,cnt=0;
cin>>num;
for(int i=1;i<=num/2;i++){
    if((num-i)%i==0)
        cnt++;
}
cout<<cnt<<endl;
}
