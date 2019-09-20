				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void idea1(int n){
	
	char grid[n+1][n+1];
	for(int i = 0 ;i < n; i++){
		for(int j = 0 ; j < n ; j++){
			if(i&1){
				if(j&1)
					grid[i][j] = 'W';
				else
					grid[i][j] = 'B';
			}
			else{
				if(j&1)
					grid[i][j] = 'B';
				else
					grid[i][j] = 'W';
			}
		}
	}
	for(int i = 0 ;i < n; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%c",grid[i][j]);
		}
		puts("");
	}
	
	
}

int main()
{
	int n; 
	scanf("%d",&n);
	idea1(n); 
    return 0;
}
