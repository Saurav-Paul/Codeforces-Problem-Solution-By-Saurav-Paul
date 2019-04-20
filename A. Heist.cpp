#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,temp,maximum,minimum;
	scanf("%lld%lld",&n,&temp);
	maximum=minimum=temp;
	for(int i=1; i< n; i++){
		scanf("%lld",&temp);
		maximum=max(temp,maximum);
		minimum=min(minimum,temp);
	}
	ll total=maximum-minimum+1;
	printf("%lld\n",total-n);
	
	
	return 0;
}
