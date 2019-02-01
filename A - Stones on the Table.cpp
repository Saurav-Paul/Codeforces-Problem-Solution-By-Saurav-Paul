#include<iostream>
using namespace std;
int main(){
string word;
int ans=0,n;
cin>>n>>word;
for(int i=0;i<word.size()-1;i++)
{
if(word[i]==word[i+1])
    ans++;

}
cout<<ans<<endl;
return 0;
}
