#include<iostream>
using namespace std;
int main(){
int n,cnt=1;
cin>>n;
int temp;
cin>>temp;
n--;
while(n--){
  int test;
  cin>>test;
  if(test==10 && temp==01)
        cnt++;
  else if(test==01 && temp==10)
    cnt++;
temp=test;

}
cout<<cnt<<endl;
return 0;
}
