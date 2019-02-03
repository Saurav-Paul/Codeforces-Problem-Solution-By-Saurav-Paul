#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        int st=0,tt=0;
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'|| s[i]=='u')
            st=1;
            if(t[i]=='a' || t[i]=='e'|| t[i]=='i' || t[i]=='o' || t[i]=='u')
                tt=1;
                if(st!=tt)
            {
                cout<<"No"<<endl;
                return 0;
            }

}
cout<<"Yes"<<endl;
return 0;
}
