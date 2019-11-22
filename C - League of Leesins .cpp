				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ; scanf("%d",&n) ;
	
	vector< vector<int> > v(n-2, vector<int> (3,0) ) ;
	const int nax = 8e5 + 90 ;
	vector<int> cnt(nax) ;
	vector< vector<int> > parent(nax,vector<int>() ) ;
	for(int i = 0 ; i < n-2 ; i++){
		for(auto &x : v[i]){
			scanf("%d",&x) ;
			cnt[x] ++;
			parent[x].push_back(i) ;
		}

	}

	int now = -1 ;
	for(int i = 0 ; i < nax ; i++ ){
		if(cnt[i] == 1){
			now = i ;
			break ;
		}
	}
	vector<int> ans(n) ;
	int x = 0 ;
	int which = -1;
	int a  = 0 , b = 0 ;
	ans[x++] = now ;
	for(int i = 0 ; i < n-2 ; i++){
		
		if(i){
			for(auto y : parent[a]){
				for(auto z : parent[b] ){
					if(y == z && y != which){
						which = y ;
						goto next ;
					}
				}
			}
			next :

			for(auto y : v[which] ){
				if(y != ans[x-1] && y!= ans[x-2]) {
					now = y ;
					break ;
				}
			}
			a = b;
			b = now ;
			ans[x++] = now ;
			
			
		}
		else{
			which =  parent[now][0] ;
			bool ok = false ;
			for(auto y : v[which] ){
				if(now == y) continue ;
				if(ok){
					b = y ;
				}
				else{
					a = y ;
					ok = true ;
				}
			}

			if(cnt[a] == 3){
				swap(a,b) ;
			}
			ans[x++] = a;
			ans[x++] = b;
			cnt[a] --; cnt[b] --;
			now = a ;
		}
	}
	for(auto y : ans)
		printf("%d " , y) ;
	puts("") ;
    return 0;
}
