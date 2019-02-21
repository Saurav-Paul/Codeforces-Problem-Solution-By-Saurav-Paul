#include<bits/stdc++.h>
using namespace std;
void FAST_IO();
int main(){
FAST_IO();
long long int ans=1,a,b;
cin>>a>>b;
for(int i=1;i<=min(a,b);i++)
    ans*=i;
cout<<ans<<endl;

return 0;
}
void FAST_IO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
    #ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
}
