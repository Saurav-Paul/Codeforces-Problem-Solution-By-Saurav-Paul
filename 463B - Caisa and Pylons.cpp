#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	int mx = 0;
	
	while(n--){
		int temp ;
		scanf("%d",&temp);
		if(temp > mx)
			mx = temp;
	}
	printf("%d\n",mx);
	
	return 0;
}
