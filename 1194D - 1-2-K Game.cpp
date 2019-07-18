#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	scanf("%d%d",&n,&k);
	bool win = true ;
	if(k % 3==0){
		int x= n % (k+1) ;
		if(x%3==0 and x != k) 
			win = false;
	}
	else
		if(n%3==0)
			win = false;
			
	puts(win? "Alice":"Bob");		
	return ;
}

int main(){
	
	int t;
	scanf("%d",&t);
	while(t--)
		solve();
		
	return 0;
}
