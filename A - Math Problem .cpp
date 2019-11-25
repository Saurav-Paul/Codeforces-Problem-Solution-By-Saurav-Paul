#include<bits/stdc++.h>
using namespace std;

void solve () {
	int n ; scanf("%d",&n) ;
	
	int x = 0 , y = 0;
	for(int i = 0 ; i < n; i++){
		int a, b; 
		scanf("%d%d",&a,&b) ;
		if( a > b ) swap(a,b) ;
		if(!i){
			x = a , y = b;
		}
		else{
			x = max(x,a) ;
			y = min( y , b) ;
		}
	}
	int	ans = x - y;
	printf("%d\n",max(ans,0)) ;
}

int main (){
	
	int t ; scanf("%d",&t) ;
	while(t--)
		solve () ;
	return 0 ;
}
