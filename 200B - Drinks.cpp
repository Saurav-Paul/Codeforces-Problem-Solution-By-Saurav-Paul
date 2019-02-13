#include <bits/stdc++.h>
using namespace std;
int main(){
        double t=0;
        int n,tcase;
        cin>>n;
        tcase=n;
        while(tcase--)
        {
                double temp;
                cin>>temp;
                t+=temp;
        }
        printf("%lf\n",(t/(n*1.0)));
        return 0;

}
