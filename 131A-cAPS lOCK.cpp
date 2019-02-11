#include <bits/stdc++.h>
using namespace std;

int main() {

        char x[100];
        int i,c;
        scanf("%s",x);
            c=0;
            for ( i = 0; i < strlen(x); ++i) {
                if(islower(x[i])==0)
                    c++;
            }
            if(c== strlen(x) || (c==strlen(x)-1 && islower(x[0]))){

                for ( i = 0; i < strlen(x); ++i) {
                        x[i]=tolower(x[i]);
                }
                                if(strlen(x)-1==c){
                        x[0]=toupper(x[0]);}
            }
            cout<<x<<endl;


        return 0;
}
