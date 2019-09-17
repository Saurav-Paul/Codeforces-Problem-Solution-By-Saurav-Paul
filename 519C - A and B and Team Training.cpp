				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int experienced, newbies; scanf("%d%d",&experienced,&newbies);
	int cnt = 0;
	
	while(1){
		if( experienced < newbies ){
			if( experienced >= 1 and newbies >=2 )
				cnt++, experienced-=1 , newbies -= 2;
			else
				break ;
		}
		else{
			if( experienced >= 2 and newbies >= 1)
				cnt ++ , experienced -= 2 , newbies -=1;
			else
				break ;
			}
	}
	
	printf("%d\n",cnt);
    return 0;
}
