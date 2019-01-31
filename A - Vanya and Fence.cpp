#include<iostream>
using namespace std;
int main(){
int n,h;
int cnt=0;
cin>>n>>h;
while(n--){
    int temp;
    cin>>temp;
    if(temp>h)
        cnt+=2;
    else
        cnt++;

}
cout<<cnt<<endl;
return 0;
}
