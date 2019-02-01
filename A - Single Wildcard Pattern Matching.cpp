#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s,t;
    long long int i,j,k,l;
    cin>>k>>l;
    cin>>s>>t;
    k--;
    l--;
    int flag=1,iflag=1,kflag=1,nteql=0;
    if(k!=l)
        nteql=1;
    i=0;
    while(i<=k )
    {
        if(k>l+1){
            flag=0;break;
        }
        if(iflag==0 && kflag==0)
            break;
        if(s[i]=='*' &&iflag)
        {
            iflag=0;
        }
        else if(s[i]==t[i] &&iflag)
        {
            i++;
        }
        else if(s[i]!=t[i] &&iflag)
        {
            flag=0;
            break;
        }
        if(s[k]=='*' && kflag){
            kflag=0;
        }
        else if(s[k]==t[l] && kflag)
        {
            k--;
            l--;
        }
        else if(s[k]!=t[l] && kflag)
        {
            flag=0;
            break;
        }

    }
    if(iflag &&kflag &&nteql )
        flag=0;
   for(;i<=l && flag;i++,l--){
    if((t[i]>='a' && t[i]<='z') && (t[l]>='a' && t[l]<='z')){
        continue;
    }
    else{
        flag=0;
        break;
    }
   }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
