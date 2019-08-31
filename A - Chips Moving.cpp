#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d",&n);
	
	int oddcnt= 0 , evencnt =0;
	
	for(int i = 0 ; i < n; i++){
		int temp; scanf("%d",&temp);
		if(temp&1)
			oddcnt ++;
		else
			evencnt ++;
	}
	
	printf("%d\n",min(oddcnt,evencnt));
	return 0;
}
