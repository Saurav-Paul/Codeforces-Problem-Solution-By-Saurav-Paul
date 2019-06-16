#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
	ll x, y , z;
	scanf("%lld%lld%lld",&x,&y,&z);
	ll can_buy = x/z + y/z + (x%z+y%z)/z ;
	ll mini = 0;
	if((x%z+y%z)/z){
		ll temp = max(x%z,y%z);
		mini = z-temp;
	}
	printf("%lld %lld\n",can_buy,mini);
	return 0;
}
