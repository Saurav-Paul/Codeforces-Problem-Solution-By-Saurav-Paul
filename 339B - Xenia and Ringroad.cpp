#include <iostream>
using namespace std;
int main(){
        long long int n,m;
        cin>>n>>m;
        long long int time=0;
        long long int current_pos=1;
        while(m--) {
                long long int temp;
                cin>>temp;
                if(current_pos<temp)
                {
                        time+=temp-current_pos;
                        current_pos=temp;
                }
                else if(current_pos>temp) {
                        time+=(n-current_pos)+temp;
                        current_pos=temp;
                }

        }
        cout<<time<<endl;
        return 0;
}
