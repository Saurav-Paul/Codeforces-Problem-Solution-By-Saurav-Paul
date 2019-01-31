#include<iostream>
using namespace std;
int main(){
int n,Danik=0,Anton=0;
cin>>n;
while(n--){

    char ch;
    cin>>ch;
    if(ch=='A')
        Anton++;
    else if(ch='D')
        Danik++;


}
if(Anton>Danik)
    cout<<"Anton"<<endl;
else if(Danik>Anton)
    cout<<"Danik"<<endl;
else
    cout<<"Friendship"<<endl;

return 0;
}
