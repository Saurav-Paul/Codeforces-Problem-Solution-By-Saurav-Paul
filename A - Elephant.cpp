#include<iostream>
using namespace std;
int main(){
int n,cnt=0;
cin>>n;

cnt+=n/5;
n=n%5;

cnt+=n/4;
n=n%4;

cnt+=n/3;
n=n%3;

cnt+=n/2;
n=n%2;

cnt+=n/1;
cout<<cnt<<endl;

return 0;
}
