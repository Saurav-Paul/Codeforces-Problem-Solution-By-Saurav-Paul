#include<bits/stdc++.h>
using namespace std;
int main(){
vector<long long int>v;
long long int n;
cin>>n;
long long index=0,number=0;
for(int i=0;i<n;i++){
    long long temp=0;
    cin>>temp;
    v.push_back(temp);
    if(temp>number){
        number=temp;
        index=i;

    }

}

long long int segment_max=0,temp=0;
for(int i=0;i<v.size();i++){
if(v[i]!=number) temp=0;
if(v[i]==number) temp++;
segment_max=max(temp,segment_max);
}
cout<<segment_max<<endl;
return 0;
}
