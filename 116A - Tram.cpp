#include <iostream>
using namespace std;
int main(){
        int exit,enter,current=0,maxcurrent=0;
        int n;
        cin>>n;
        while(n--) {
                cin>>exit>>enter;
                current+=enter;
                current-=exit;
                if(current>maxcurrent)
                        maxcurrent=current;
        }
        std::cout << maxcurrent << '\n';
        return 0;
}
