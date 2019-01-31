#include<iostream>
using namespace std;
int main(){
int x,y;
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        int temp;
        cin>>temp;
        if(temp==1)
        {
            x=i;
            y=j;
        }
    }

}
int ans=abs(3-x)+abs(3-y);
    cout<<ans<<endl;
return 0;
}
