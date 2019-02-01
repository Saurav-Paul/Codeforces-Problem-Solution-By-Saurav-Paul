#include<iostream>
using namespace std;
int main()
{
    string word;
    int zero,one;
    cin>>word;
    zero=one=0;
    for(int i=0; i<word.size(); i++)
    {
        char c=word[i];
        if(c=='0')
        {
            one=0;
            zero++;
        }
        else if(c=='1')
        {
            zero=0;
            one++;
        }
        if(one>6 || zero>6)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
