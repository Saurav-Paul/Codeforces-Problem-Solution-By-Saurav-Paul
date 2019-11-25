#include<bits/stdc++.h>
using namespace std;

void solve () {
	int n ; scanf("%d",&n) ;
	vector<int> v(n) ;
	bool have[n+10] = {};
	for(auto &x : v) {
		scanf("%d",&x) ;
	}
	bool ok = true ;
	int mx = 0, x = 1;
	
	for(int i = 0 ; i < n ; i++){
		if(mx < v[i] && have[v[i]] == false){
			mx = v[i] ;
			have[v[i]] = true ;
			continue ;
		}
		
		mx = max(v[i] , mx ) ;
		while(have[x] != false){
			++x ;
		}
		if(x > mx){
			ok = false;
			break ;
		}
		v[i] = x ;
		have[x] = true ;

	}
	
	
	if(ok){
		for(auto y : v) {
			printf("%d ",y) ;
		}
	}
	else{
		printf("-1") ;
	}
	puts("") ;
	
}

int main (){
	
	int t ; scanf("%d",&t) ;
	while(t--)
		solve () ;
	return 0 ;
}
