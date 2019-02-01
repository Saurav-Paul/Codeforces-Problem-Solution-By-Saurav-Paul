
 #include<iostream>
using namespace std;
int main(){
long long int n,m,test,temp,t=0;
cin>>n>>m;
for(test=0;test<n;test++){
    cin>>temp;
    t+=temp;
    cout<<t/m<<" ";
    t-=((t/m)*m);

}
return 0;
}
