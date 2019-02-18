#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k;
    cin>>n>>m>>k;
    long long fmax=0,smax=0;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        if(temp>fmax){
            smax=max(fmax,smax);
            fmax=temp;

        }
        else{
            if(temp>smax){
                fmax=max(smax,fmax);
                smax=temp;

            }

        }

    }
    if(smax>smax)   swap(smax,fmax);
    long long ans=0,temp;
    temp=m/(k+1);
    ans+=(temp*smax);
    temp=m-temp;
    ans+=(temp*fmax);
    cout<<ans<<endl;


return 0;
}
