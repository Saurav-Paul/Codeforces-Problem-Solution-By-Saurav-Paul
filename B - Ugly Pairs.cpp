#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int sz=s.size();
    bool flag=true ;
    for(int i=1; i<sz ; i++)
    {
        if(abs(s[i]-s[i-1])==1)
        {
            flag=false;
            break ;
        }
    }
    return flag ;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i< n; i++)
    {
        string s,even="",odd="";
        cin>>s;
        for(auto i : s)
        {
            if(i&1)
            {
                odd+=i;
            }
            else
            {
                even+=i;
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        if(check(odd+even))
        {
            cout<<odd+even<<"\n";
        }
        else if(check(even+odd))
        {
            cout<<even+odd<<"\n";
        }
        else
        {
            puts("No answer");
        }

    }
    return 0;
}
