#include <bits/stdc++.h>
using namespace std;
int main(){
        long long int x,y,z;
        long long int a,b,c;
        cin>>x>>y>>z;
        cin>>a>>b>>c;
        bool check=1;

        a-=x;
        if(a<0)
                check=0;
        long long temp=a+b;
        temp-=y;
        if(temp<0)
                check=0;
        temp+=c;
        temp-=z;
        if(temp<0)
                check=0;
        if(check)
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;


}
