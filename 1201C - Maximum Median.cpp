				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(p)	p.begin(),p.end()
using namespace std;


int main()
{
	int n, k;
	scanf("%d%d",&n,&k);
	
	vector <int > v(n);
	for(int &x : v)
		scanf("%d",&x);
		
	sort(all(v));
	int med = n/2 ;
	
	ll ans = v[med];
	
	ll low = 0 , high = 1e18 + 90;
	while(low <= high){
		ll mid = low + ( (high-low) >> 1);
		
		ll sum = 0;
		for(int i = med ; i < n ; i ++){
			if(v[i] <= mid)
				sum += (mid - v[i]);
			if(sum > k)
				break ;
			
		}
		
		if(sum <= k){
			ans = max(ans,mid);
			low = mid + 1;
		}
		else
			high = mid - 1;
		
	}
	
	printf("%lld\n",ans);
	
    return 0;
}
