				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a , b; scanf("%d%d",&a,&b) ;
	if(a-b == 0 ){
		printf("%d0 %d1\n",a,b) ;
	}
	else if(b-a == 1 ){
		printf("%d9 %d0\n",a,b) ;
	}
	else{
		puts("-1") ;
	}
    return 0;
}
