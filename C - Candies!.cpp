				/*Saurav Paul*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n ;
	scanf("%d",&n);
	vector < int > v(n+1) ;
	for(int i = 1 ; i <= n ; i++){
		int temp;
		scanf("%d",&temp);
		v[i] = v[i-1] + temp;
	}
	int q;

	scanf("%d",&q);
	while(q--){
		int l , r;
		scanf("%d%d",&l,&r);
		int ans = v[r] - v[l-1];
		ans /=10;
		printf("%d\n",ans);
		
	}
    return 0;
}
