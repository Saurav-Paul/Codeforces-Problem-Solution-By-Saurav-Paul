#include<iostream>
using namespace std;
int main()
{
    string word;
    string vowel="aeiouy";
    cin>>word;
    for(int i=0; i<word.size(); i++)
    {
        int temp=0;
        if(word[i]<97)
            word[i]+=32;
        for(int j=0; j<vowel.size(); j++)
        {
            if(vowel[j]==word[i])
            {
                temp=1;
                continue;
            }
        }
        if(temp)
            continue;
        cout<<"."<<word[i];
    }
    cout<<endl;
    return 0;
}
