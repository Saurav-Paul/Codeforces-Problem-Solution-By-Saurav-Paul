#include <iostream>
using namespace std;
int main(){
        string s;
        bool flag=0;
        cin>>s;
        for(int i=0; i<s.size(); i++)
                if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
                {
                        flag=1;
                        break;
                }
        if(flag)
                std::cout << "YES" << '\n';
        else
                std::cout << "NO" << '\n';
        return 0;
}
