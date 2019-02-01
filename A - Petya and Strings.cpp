#include<iostream>
using namespace std;
int main()
{
    string first, second;
    cin>>first>>second;

    for(int i=0; i<first.size(); i++)
    {
        if(first[i]<97)
            first[i]+=32;
        char f=first[i];
        if(second[i]<97)
            second[i]+=32;
        char s=second[i];
        if(f!=s){
        if(f>s)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
        return 0;
        }

    }
    cout<<0<<endl;
    return 0;
}
