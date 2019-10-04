#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	scanf("%d",&n);
	
	int mx = 0;
	vector<int> v(n);
	for(auto &x : v ){
		scanf("%d",&x);
		mx = max(mx, x ) ;
	}
	
	int gcd = 0;
	long long int sum = 0;
	for(auto x : v){
		gcd = __gcd(gcd, mx-x) ;
		sum += (mx-x) ;
	}
	long long ans = (gcd==0 ? 0 : sum/ gcd );
	printf("%lld %d\n",ans,gcd);
	
	return 0;
}
