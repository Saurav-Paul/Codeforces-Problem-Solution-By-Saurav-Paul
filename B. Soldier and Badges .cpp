				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; scanf("%d",&n);
	int total = 0;
	vector<int> v(n);
	
	for(auto &x : v) scanf("%d",&x);  
	sort(v.begin() , v.end() );
	
	for(int i = 1 ; i < n; i++){
		if(v[i-1] >= v[i] ){
			int x = v[i-1] - v[i] + 1;
			total += x;
			v[i] += x;
		}
	}
	
	printf("%d\n",total);
    return 0;
}
