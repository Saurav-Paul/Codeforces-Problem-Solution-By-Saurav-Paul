#include<bits/stdc++.h>
using namespace std;

void solve(){
	
	int n;
	scanf("%d",&n);
	vector<int> v(n);
	
	
	for(int &x : v)
		scanf("%d",&x);
		
	long long int cnt = 0;
	int x = v[n-1];
	
	for(int i = n-2 ; i >= 0 ; i--)
		if(x < v[i])
			cnt ++;
		else
			x = min(x,v[i]);
	
	printf("%lld\n",cnt);
	
}

int main(){
	int q; scanf("%d",&q);
	while(q--)
		solve();
	return 0;
}
