#include<iostream>
using namespace std;
int main(){
int flag=0,value=0,temp=0;
char check[]={'h','e','l','l','o'};
string input;
cin>>input;
int len=input.length();
for(value=0;value<len;value++){
    if(input[value]==check[temp]){
        temp++;
        if(temp==5){
            flag=1;
            break;
        }
    }

}
 if(flag){
        cout<<"YES"<<endl;
    }
    else{

    cout<<"NO"<<endl;
    }

}
