				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 90 ;

int main()
{
	int n; scanf("%d",&n);
	
	vector<int> v(n);
	for(int &x : v ) scanf("%d",&x);
	
	int mn= INF, ind=-1 ;
	
	for(int i = 0 ; i < n; i++){
		int t = n;
		int need = max(0,v[i]-i );
		need = ceil((double)need/t);
		if(mn > need ){
			ind = i+1; 
			mn = need ; 
		}
	}
	printf("%d\n",ind);

    return 0;
}
