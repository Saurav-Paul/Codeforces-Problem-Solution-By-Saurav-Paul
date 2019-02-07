#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k;
    cin>>b>>k;
    int total=0;
    for(int i=0; i<k; i++)
    {
        cin>>a;
        if(i==k-1)
        {
            if(a%2==1)
                total++;
            continue;
        }
        if(a%2==1 && b%2==1)
        {
            total++;
        }

    }
    if(total%2==0)
        cout<<"even"<<endl;
    else
    {

        cout<<"odd"<<endl;
    }


    return 0;
}

