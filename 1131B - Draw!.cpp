				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using ll = long long int ;
using namespace std;

int find_match(int px, int py , int x , int y){
	int cnt = 0;
	cnt = min(x,y) -max(px,py) +  1;
	return max(0,cnt);
}

int main()
{
	/**
	 * 0 0 = matched
	 * 2 0
	 * 2 1
	 * 3 1
	 * 3 1
	 * 3 2
	 * 3 3 = matched
	 * 3 4
	 * 3 4
	 *  
	 * **/
	int n;
	scanf("%d",&n);
	int cnt = 1, prevx = 0, prevy = 0;
	
	for(int i = 0 ; i < n ; i++){
		int x, y;
		scanf("%d%d",&x,&y);
		if(prevx==x && prevy==y)
			continue ;
		cnt += find_match(prevx,prevy,x,y);
		if(prevx==prevy)
			cnt--;
		prevx = x, prevy = y;
	}
	printf("%d\n",cnt);
	
    return 0;
}
