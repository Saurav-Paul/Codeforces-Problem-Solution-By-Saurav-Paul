#include <iostream>
using namespace std;
int main()
{
    int n,v,total=0,have=0,curr=0;

    cin>>n>>v;
    int need=n-1;
    for(int i=1; i<n; i++)
    {
        if(need==have) break;
        if(i==1)
        {
            int temp=min(need,v);
            have+=temp;
            total+=(temp*i);
        }
        else
        {
            total+=i;
            have++;
        }

    }
    cout<<total<<endl;
    return 0;
}

