#include<iostream>
using namespace std;
int main(){
long long int N,K,L,M,total;
int check =1;
cin>>N>>M>>K>>L;
if(M>N){
    cout<<-1<<endl;
    return 0;
}
if(K+L>N){
    cout<<-1<<endl;
    return 0;
}
total=N/M;
if(total*M<L){
    cout<<-1<<endl;
    return 0;
}
cout<<total<<endl;

return 0;
}
