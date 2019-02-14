#include <bits/stdc++.h>
using namespace std;
int main(){
        long long int n, k, l, c, d, p, nl, np,minimum;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        long long int tL=k*l;
        minimum=(tL)/(n*nl);
        long long int tSlice=c*d;
        minimum=min(minimum,tSlice);
        long long solt=p/(n*np);
        minimum=min(solt,minimum);
        cout<<minimum<<endl;
        return 0;
}

