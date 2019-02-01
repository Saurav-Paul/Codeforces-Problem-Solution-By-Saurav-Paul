#include<iostream>
using namespace std;
int main(){
long long int num , k ;
cin>>num>>k;
while(k--){
    if(num%10==0)
        num/=10;
    else
        num--;

}
cout<<num<<endl;
return 0;
}
