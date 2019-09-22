				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int n , m , w;
	int mn=INT_MAX  ;
	scanf("%lld%lld%lld",&n,&m,&w);
	
	vector<int> v(n);
	for(int i = 0 ; i < n; i++) scanf("%d",&v[i]),mn = min(mn,v[i]);
	
	long long int low = mn , high = 1e12 ;
	while(low < high){
		long long int mid = (low + high + 1)  >> 1;
		long long int cnt = 0;
		vector<long long int> tv(n+w+10);
		long long int x = 0;
		for(int i = 0 ; i < n; i++){
			x += tv[i];
			long long int curr = v[i] + x;
			if(curr < mid){
					long long int temp = mid - curr ;
					cnt += temp;
					x += temp;
					if(cnt > m ) break ;
					tv[i+w] -= temp;
				}
		}

		if( cnt > m ) high = mid - 1;
		else low = mid ;
	}
	printf("%lld\n",low);
    return 0;
}
