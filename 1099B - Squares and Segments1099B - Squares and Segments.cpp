#include<bits/stdc++.h>
using namespace std;
int find_ans(int n){
	for(int i = 2 ;  ; i++){
		int x = i/2 * (i/2 + (i&1));
		if(x >= n){
			n = i;
			break ;
		}
	}
	return n ;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",find_ans(n));
	return 0;
}
