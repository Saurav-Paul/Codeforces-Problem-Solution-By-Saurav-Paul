				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long int ;
int upperbound(long long int x, vector<long long int > & cum) {
	int low = 0 , high = (int)cum.size() ;
	
	while(low < high){
		int mid = (low + high ) >> 1;
		if( x >= cum[mid] ) low = mid + 1;
		else high = mid ;
	}
	return low ;
}
 
 
int main()
{
	int n , q ;
	scanf("%d%d",&n,&q);
	
	vector<int> strength(n);
	vector<long long int > arrows(q),cum(n+1);
 
	
	for(auto &x : strength ) scanf("%d",&x);
	for(auto &x : arrows ) scanf("%lld",&x);
	
	for(int i = 1 ; i <= n; i++){
		cum[i] = cum[i-1] + strength[i-1] ;
	}
 
	ll last = 0;
	for(long long int x : arrows){
		x += last ;
		
		int ind = upperbound(x,cum);
		if(ind > n ){
			last = 0;
			printf("%d\n",n);
			continue ;
		}
		ll alive = n - ind + 1;
		last = x ;

		printf("%lld\n",alive) ;
	
	}
 
    return 0;
}
