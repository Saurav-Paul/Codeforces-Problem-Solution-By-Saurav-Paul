#include<bits/stdc++.h>
#define eb                    emplace_back
#define all(p)                p.begin(),p.end()
using namespace std;
 
void solve(){
	int n ; scanf("%d",&n);
	vector <int > v;
	for(int i=0 ; i < n; i++){
		int temp ;
		scanf("%d",&temp);
		if(temp)
			v.eb(temp);
		
	}
	sort(all(v));
	n = v.size();
	if(n <3)
		puts("0");
	else{
		
		int prank = v[n-2]-1;
		printf("%d\n",min(prank,n-2));
		
		
	}
		
}
 
int main()
{
 
	int n; scanf("%d",&n);
	while(n--)
		solve();
		
    return 0;
}
