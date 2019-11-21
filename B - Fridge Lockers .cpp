#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n , chains;
	scanf("%d%d",&n,&chains) ;
	vector< pair<int,int> > save,ans;
	
	for(int i = 0 ; i < n; i++){
		int x = 0; scanf("%d",&x) ;
		save.push_back(make_pair(x,i+1));
	}
	
	if(chains < n || n ==2){
		puts("-1");
		return ;
	}
	
	long long int cnt = 0;
	sort(save.begin() , save.end() ) ;
	
	for(int i = 0 ; i < n ; i++){
		if(i==n-1){
			cnt += save[i].first + save[0].first ;
			ans.push_back(make_pair(save[i].second,save[0].second)) ;
		}
		else{
			cnt += save[i].first + save[i+1].first ;
			ans.push_back(make_pair(save[i].second,save[i+1].second));
		}
	}
	printf("%lld\n",cnt) ;
	for(auto x : ans) {
		printf("%d %d\n",x.first,x.second) ;
	}
}

int main() {
	int t ; scanf("%d",&t) ;
	while(t--)
		solve() ;
	return 0 ;
}
