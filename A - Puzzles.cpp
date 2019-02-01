#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,total,minimum=INT_MAX;
cin>>total>>n;
int ara[n];
for(int i=0;i<n;i++){
    cin>>ara[i];
}
sort(ara,ara+n);
//for(int i=0;i<n;i++){
//    cout<<ara[i]<<" ";
//}
//cout<<endl;
for(int i=0;i+total<=n;i++){
  int temp=i+1;
  int mini,maxi;
  mini=maxi=ara[i];
//  cout<<"st minimum and maximum "<<mini<<maxi<<endl;
  while(temp<i+total)  {
//        cout<<ara[temp]<<endl;
    if(ara[temp]<mini)
        mini=ara[temp];
        else if(ara[temp]>maxi)
            maxi=ara[temp];
    temp++;
    }
//    cout<<"minimum and maximum "<<mini<<" "<<maxi<<endl;
    if(minimum>maxi-mini)
        minimum=maxi-mini;
  }
cout<<minimum<<endl;
return 0;
}
