				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

long long int lowbound(vector<long long int> &v , long long value){
	long long int low = 0 , high = v.size()-1;
	while(low < high){
		long long mid = low + ( (high - low ) >> 1 );
		if(v[mid] < value) low = mid + 1;
		else high = mid;
	}
	return low ;
}

int main()
{
	int n, m ; scanf("%d%d",&n,&m);
	
	vector<long long int> dormitors(n+1);
	for(int i = 1; i <= n; i++)
		scanf("%lld",&dormitors[i]);
	
	vector<long long int> cum(n+1);
	for(int i = 1 ; i <= n; i++) cum[i] += cum[i-1] + dormitors[i];
	for(int i = 0 ; i  < m ; i++){
		long long int room ; scanf("%lld",&room);
		long long int ind = lowbound(cum,room);
		long long  int roomno = room - cum[ind-1] ;
		printf("%lld %lld\n",ind, roomno );
	}
    return 0;
}
