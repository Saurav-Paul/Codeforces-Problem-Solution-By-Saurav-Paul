#include<iostream>
using namespace std;

int main()
{
    int n,l1,l2,r1,r2;
    cin>>n;

    while(n--)
    {
        cin>>l1>>r1>>l2>>r2;
        if(l1==r2){
        l1=r1;
        }
        cout<<l1<<" "<<r2<<endl;


    }
    return 0;
}
