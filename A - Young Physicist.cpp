#include<iostream>
using namespace std;
int main(){
int temp,x=0,y=0,z=0,n;
cin>>n;
while(n--){
    cin>>temp;
    x+=temp;
    cin>>temp;
    y+=temp;
    cin>>temp;
    z+=0;

}
if(x==0&&y==0&&z==0){
    cout<<"YES"<<endl;
}
else{

    cout<<"NO"<<endl;
}
return 0;
}
