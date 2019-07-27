#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , a , b;
	scanf("%d%d%d",&n,&a,&b);
	vector<int> v(n);
	for(int &x :v)
		scanf("%d",&x);
		
	sort(v.begin(),v.end());
	printf("%d\n",(int)(v[b]-v[b-1]));
	
	return 0;
}
