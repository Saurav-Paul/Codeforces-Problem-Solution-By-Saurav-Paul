#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int low,high;
if(n<m)
{
    low=n;
    high=m;
}
else{
    low=m;
    high=n;
}
cout<<low<<" ";
high-=low;
cout<<high/2<<endl;
return 0;
}
