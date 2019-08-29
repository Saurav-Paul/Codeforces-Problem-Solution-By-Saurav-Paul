#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , oneseater ,twoseater,mixed = 0;
    scanf("%d%d%d",&n,&oneseater,&twoseater);

    int denied = 0;
    for(int i = 0 ; i < n; i ++){
        int client;
        scanf("%d",&client);
        if(client == 2){
            if(twoseater){
                twoseater --;
            }
            else
                denied += client;
        }
        else{
            if(oneseater){
                oneseater --;
            }
            else if(twoseater){
                twoseater --;
                mixed ++;
            }
            else if(mixed){
                mixed --;
            }
            else
                denied += client;
        }
    }

    printf("%d\n",denied);

    return 0;
}
