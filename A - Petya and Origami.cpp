
 #include<iostream>
using namespace std;
int main(){
long long int n,k,total=0,temp;
cin>>n>>k;
temp=n*2;
if(temp%k!=0) total+=temp/k+1;
else   total+=temp/k;

temp=n*5;
if(temp%k!=0) total+=(temp/k+1);
else          total+=temp/k;

temp=n*8;
if(temp%k!=0) total+=temp/k+1;
else          total+=temp/k;

cout<<total<<endl;
return 0;
}
