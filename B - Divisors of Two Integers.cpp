#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>vec;

int main()
{
    int n,temp;
    cin>>n;
    while(n--)
    {

        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());

    int x=vec[vec.size()-1];
    cout<<x<<" ";


    for(int i=vec.size()-1; i>=0; i--)
    {


        if(vec[i]==vec[i-1])
            continue;


        if(x%vec[i]==0)
        {
            vec.erase(vec.begin()+i);

        }


    }
    int y=vec[vec.size()-1];
    cout<<y<<endl;


    return 0;
}
