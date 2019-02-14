#include<bits/stdc++.h>
using namespace std;
std::vector<long long int> shops;
long long int n,q;

int main(){
        long long int temp;
        cin>>n;
        for(int i=0; i<n; i++) {
                cin>>temp;
                shops.push_back(temp);
        }
        sort(shops.begin(),shops.end());
        cin>>q;
        while(q--) {
                cin>>temp;
                temp=upper_bound(shops.begin(),shops.end(),temp)-shops.begin();
                cout<<temp<<endl;
        }
        return 0;
}
