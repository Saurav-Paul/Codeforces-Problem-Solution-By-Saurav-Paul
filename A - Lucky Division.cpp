#include<iostream>
using namespace std;
int main()
{
    int lucky[]={4,7,47,74,477,747,774,447,444,777,77,44};
    int input,i,flag=0;
    cin>>input;
    for(i=0;i<12;i++)
    {
        if(input%lucky[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
