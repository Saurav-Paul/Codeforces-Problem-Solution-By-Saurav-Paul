#include<bits/stdc++.h>
using namespace std;
const int nax = 1e5 + 10;
int cnt[nax];

int main(){
	
	int n;
	scanf("%d",&n);
	
	int mx = 0;
	for(int i = 0 ; i < n; i++){
		int temp ; scanf("%d",&temp);
		cnt[temp] ++;
		mx = max(mx,temp);
	}
	
	bool flag = false;
	for(int i = mx ; i > 0 ; i--){
		if(cnt[i]==0)
			continue ;
		if(cnt[i] & 1){
			flag = true;
			break ;
		}
		
	}
	
	puts(flag? "Conan" : "Agasa");
	
	return 0;
}
