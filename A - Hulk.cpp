#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
for(int i=1;i<=num;i++){
    if(i%2==0){
        cout<<"I love ";
    }
    else{
        cout<<"I hate ";
    }
    if(i==num){
        cout<<"it"<<endl;
    }
    else{
        cout<<"that ";
    }
}

return 0;
}
