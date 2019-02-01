#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num;

    cin>>num;
    int len=num.length(),cnt=0;
    string temp="";
    for(int value=0; value<len; value++)
    {
        if(num[value]=='1')
        {
            cnt++;
        }
        else
        {
            temp.push_back(num[value]);
        }
    }
    int check;
    for(check=-1; check+1<temp.length() && temp[check+1]=='0'; check++)
    {
        cout<<temp[check+1];
    }
    while(cnt--) cout<<1;
    for(; check+1<temp.length(); check++)
    {
        cout<<temp[check+1];
    }
