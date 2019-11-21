#include<bits/stdc++.h>
using namespace std;

void solve() {
	int a , b ;
	scanf("%d%d",&a,&b) ;
	int cnt = 0;
	int diff = abs(a-b) ;
	cnt += diff/5 ;
	diff = diff%5 ;
	cnt += diff/2;
	diff = diff%2 ;
	cnt += diff;
	printf("%d\n",cnt) ;
	
}

int main() {
	int t ; scanf("%d",&t) ;
	while(t--)
		solve() ;
	
	return 0 ;
}
