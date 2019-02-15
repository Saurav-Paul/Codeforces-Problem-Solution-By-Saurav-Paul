#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    char c='a',ch;
    while(n--)
    {
        if(cnt==4)
            cnt=0;
        ch=c+cnt;
        cout<<ch;
        cnt++;
    }
    cout<<endl;
    return 0;
}
