#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	scanf("%d%d",&n,&k);
	
	const int nax = 5e3+5 ;
	vector<int> v(n) , num[nax] ;
	
	for(int i = 0 ; i < n; i++){
		int a ; scanf("%d",&a);
		num[a].emplace_back(i);
	}
	
	if(n < k){
		puts("NO");
		return 0;
	}
	
	bool ok = true , all = false;
	
	for(int i = 0 , x = 1 ; i < nax; i++){
		if((int)num[i].size() > k){
			ok = false;
			break ;
		}
		
		for(auto y : num[i]){
			v[y] = x ++;
			all = (all or (x >= k)) ;
			if(x > k)	x = 1;
		}
	}

	if(ok and all){
		puts("YES");
		for(auto x : v)
			printf("%d ",x);
		puts("");
	}
	else
		puts("NO");

	return 0;
}
