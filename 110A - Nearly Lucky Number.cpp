#include<iostream>
using namespace std;
int main()
{

    string s;
    int cnt=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
        if(s[i]=='4' || s[i]=='7')
        {
            cnt++;
        }
    bool flag=0;
    if(cnt==4 || cnt==7)
        flag=1;
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
