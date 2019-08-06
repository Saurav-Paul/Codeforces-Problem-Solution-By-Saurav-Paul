#include<bits/stdc++.h>
using namespace std;
using pii = pair <int,int >;

int main(){
	int spaceship, base;
	scanf("%d%d",&spaceship,&base);
	
	vector<int> spc(spaceship);
	vector< pii > bse(base);
	
	for(int &x : spc)
		scanf("%d",&x);
	
	for(auto &x : bse){
		scanf("%d%d",&x.first,&x.second);
	}
	
	sort(bse.begin(),bse.end());
	
	vector<int> cum(base);
	
	for(int i= 0 ; i < base ; i++){
		if(i){
			cum[i] = cum[i-1] + bse[i].second;
		}
		else
			cum[i] = bse[i].second;
	}
	
	for(int i = 0 ; i < spaceship ; i++){
		
		int low = 0 , high = base-1;
		int ans = 0;
		while(low <= high){
			
			int mid = low + ( (high- low) >> 1);
			
			if(bse[mid].first <= spc[i]){
				ans = cum[mid];
				low = mid + 1;
			}
			else
				high = mid - 1;
			
		}
		
		printf("%d ",ans);
	}
	puts("");
	
	return 0;
}
