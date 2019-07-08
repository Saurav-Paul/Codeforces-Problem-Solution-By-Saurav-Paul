				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	vector <int > v(n);
	for(int &x : v)
		scanf("%d",&x);
	
	sort(v.begin(),v.end());
	int cnt = 0;
	/* 1 1 2 2 2 3
	 * 
	 * 
	 * */

	for(int i = 1 ; i < n-1 ; i++){
		if(v[i-1] < v[i]){
			int temp = 1;
			while( i < n-1 and v[i]==v[i+1])
				i++,temp++;
			if(i < n-1 and v[i] < v[i+1])
				cnt += temp;
		}
	}
	printf("%d\n",cnt);
    return 0;
}
