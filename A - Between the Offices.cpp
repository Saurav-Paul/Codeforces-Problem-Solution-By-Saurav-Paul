#include<iostream>
using namespace std;
int main(){
char t;
int n,sf=0,fs=0;
cin>>n;
char c;
cin>>c;
n--;
while(n--){
  cin>>t;
  if(c=='S' && t=='F')
        sf++;
  else if(c=='F' && t=='S')
    fs++;
  c=t;

}
if(sf>fs)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}
