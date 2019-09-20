				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, m , k ; scanf("%lld%lld%lld",&n,&m,&k);
	
	long long int low = 1 , high = n*m ;
	
	while(low < high){
		long long int mid = (low + high + 1  ) / 2;
	
		long long cnt = 0;

		long long int target = min(m,mid);
		for(long long int i= 1 ; i <= target; i++){
			cnt += min(n, (mid-1)/i);
		}
		if(cnt <k) low = mid ;
		else high = mid-1;
	}
	printf("%lld\n",low);

    return 0;
}
