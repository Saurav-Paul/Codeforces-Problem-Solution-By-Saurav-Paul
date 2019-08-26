
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	scanf("%d",&n);
	
	vector <int> v(n);
	
	for(int i= 0 ; i < n; i++){
		scanf("%d",&v[i]);
	}
	
	int ans = n-1;
	for(int i = 0; i < n; i++){
		bool ok = true;
		map <int, int> rem;
		
		for(int j = 0; j < i ; j++){
			
			rem[v[j]] ++;
			if(rem[v[j]]==2){
				ok = false;
				break ;
			}
			
		}
		
		int cnt = n;
		
		for(int j = n-1 ; j >= i ; j--){
			
			rem[v[j]] ++;
			if(rem[v[j]]==1)
				cnt = j;
			else
				break ;
			
		}
		
		if(ok)
			ans = min(cnt-i,ans);
		
	}
	
	
	printf("%d\n",ans);
    return 0;
}
