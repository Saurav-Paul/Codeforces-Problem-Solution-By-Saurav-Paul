				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m ; scanf("%d%d",&n,&m);
	long long int total = 0;
	
	int ara[n][m];
	for(int i = 0; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			int a ; scanf("%d",&a);
			ara[i][j] = a;
		}
	}
	
	for(int i = n-1 ; i >= 0; i--){
		for(int j = m-1 ; j >= 0 ; j--){
			if(ara[i][j] == 0 ){
				int x = ara[i][j+1] - 1;
				int y = ara[i+1][j] - 1;
				ara[i][j] = min(x,y);
			}
		
			if(j < m-1 and ara[i][j] >= ara[i][j+1]){
				total = -1;
				goto print;
			}
			
			if(i < n-1 and ara[i][j] >= ara[i+1][j]){
				total = -1;
				goto print;
			}
		}
	}
		
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m ; j++){
			total += ara[i][j] ;
		}
	}
	
	
	print :	
	printf("%lld\n",total);

    return 0;
}
