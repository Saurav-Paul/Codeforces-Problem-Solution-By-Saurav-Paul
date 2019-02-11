#include <bits/stdc++.h>
using namespace std;
int main(){
        int coins,total=0,min_coin=0;
        vector<int>coin;
        cin>>coins;
        for(int i=0; i<coins; i++) {
                int temp;
                cin>>temp;
                total+=temp;
                coin.push_back(temp);
        }
        sort(coin.begin(),coin.end(),greater<int>());
        int temp=0;
        int i=0;
        while(temp<=total) {
                temp+=coin[i];
                total-=coin[i];
                i++;
                min_coin++;
        }
        std::cout <<min_coin<< '\n';
        return 0;
}
