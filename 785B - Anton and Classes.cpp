				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
auto find_it(){
	
	int n ;
	scanf("%d",&n);
	int x , y;
	scanf("%d%d",&x,&y);
	
	for(int i = 0 ; i < n - 1 ; i++){
		int t, p;
		scanf("%d%d",&t,&p);
		x = max(t,x);
		y = min(p,y);
	}
	return make_pair(x,y);
	
}

int main()
{
	auto x = find_it();
	auto y = find_it();
	
	printf("%d\n",(int)max({0,x.first-y.second,y.first-x.second}));
	
    return 0;
}
