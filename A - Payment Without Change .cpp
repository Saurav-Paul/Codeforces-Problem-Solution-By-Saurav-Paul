				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
	
	int a , b, n , s;
	scanf("%d%d%d%d",&a,&b,&n,&s) ;
	
	int need_a = min(s/n,a);
	int need_b = s - need_a * n ;
	if(need_b <= b){
		puts("YES") ;
	}
	else puts("NO") ;
	
}

int main()
{
	int t ; scanf("%d",&t) ;
	while(t--) solve() ;

    return 0;
}
