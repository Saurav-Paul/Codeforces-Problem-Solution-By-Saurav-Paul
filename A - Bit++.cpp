#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    string operation;
    cin>>n;
    while(n--)
    {
        cin>>operation;
        if(operation=="++X" || operation=="X++")
            ans++;
        else
            ans--;
    }
    cout<<ans<<endl;
    return 0;
}
