#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number_of_four;
    int number_of_seven=n/7;
    bool flag=0;
    int maximum=INT_MAX;
    int length=number_of_seven;
    for(int i=0; i<=length; i++)
    {
        int x=n-(7*i);

        if(x%4==0)
        {

            if((i+x/4)<maximum)
            {
                number_of_four=x/4;
                number_of_seven=i;
                maximum=i+(x/4);

            }
            flag=1;

        }
    }
    if(flag)
    {
        for(int i=0; i<number_of_four; i++)
            cout<<4;
        for(int i=0; i<number_of_seven; i++)
            cout<<7;
        cout<<endl;
    }
    else
        cout<<-1<<endl;

}
