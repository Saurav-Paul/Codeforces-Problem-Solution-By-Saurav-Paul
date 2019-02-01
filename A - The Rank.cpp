#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec;
int n;
int temp, sum,num;
cin>>n;
for(temp=0;temp<n;temp++){
    int p=4;
    sum=0,num;
    while(p--){
      cin>>num;
      sum+=num;
    }
    vec.push_back(sum);
}
temp=vec[0];
sort(vec.begin(),vec.end());
for(int i=n-1;i>-1;i--){
    if(vec[i]==temp){
        cout<<(n-i)<<endl;
        break;
    }
}
}
