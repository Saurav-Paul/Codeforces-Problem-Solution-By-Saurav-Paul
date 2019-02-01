#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>vec;

int main()
{
    char c;
    string word;
    cin>>word;
    for(int i=0;i<word.size();i++)
    {
        c=word[i];
        if(c!='+')
        vec.push_back(c-'0');


    }
    sort(vec.begin(),vec.end());
    for(int i=0; i<vec.size(); i++)
    {
        if(i)
            cout<<"+";
        cout<<vec[i];

    }
    cout<<endl;
    return 0;
}
