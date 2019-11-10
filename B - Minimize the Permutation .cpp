#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n ; scanf("%d",&n) ;
	vector<int> v(n);
	for(auto &x : v){
		scanf("%d",&x) ;
		--x ;
	}
	int cnt = 0;
	while(cnt < n ){
		int nxt = min_element(v.begin() + cnt , v.end() ) - v.begin() ;
		int num = v[nxt] ;
		
		v.erase(v.begin() + nxt ) ;
		v.insert(v.begin() + cnt, num) ;
		
		if(cnt == nxt) cnt = nxt + 1;
		else cnt = nxt ;
		
	}
	for(auto x : v) 
		printf("%d ",x+1);
	puts("") ;
}

int main() {
	int q ; scanf("%d",&q) ;
	for(int i = 0 ; i < q ; i++){
		solve() ;
	}
	
	return 0 ;
}
