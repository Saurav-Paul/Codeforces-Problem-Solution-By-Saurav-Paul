#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
long long int n,k,temp;
cin>>n>>k;
if(n%2!=0)
    temp=(n/2)+1;
else
    temp=(n/2);

if(temp>=k){
    temp=2*(k-1)+1;
}
else{
        k-=temp;
    temp=2*k;
}
cout<<temp<<endl;


}
