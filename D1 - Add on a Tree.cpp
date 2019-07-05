				/*Saurav Paul*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int degree[n+1];
	memset(degree, 0 , sizeof(degree));
	
	for(int i = 1 ; i< n; i++){
		int a, b;
		scanf("%d%d",&a,&b);
		degree[a]++;
		degree[b]++;
	}
	int flag = true;
	for(int i = 1 ; i<= n; i++){
		if(degree[i]==2){
			flag = false;
			break ;
		}
	}
	puts(flag?"YES":"NO");
    return 0;
}
