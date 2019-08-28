#include<bits/stdc++.h>
using namespace std;

int main(){
    double x , y;
    cin >> x >> y;
    /**

    x^y - y^x = ?

    **/
    if(x == y){
        cout <<"="<<endl;
    }
    else{

        double x1 = y*log(x);
        double y1 = x*log(y);

        if(abs(x1-y1)<0.000000001)
            cout <<"="<<endl;
        else if(x1 < y1){
            cout << "<"<<endl;
        }
        else
            cout << ">" << endl;
    }


    return 0;
}
