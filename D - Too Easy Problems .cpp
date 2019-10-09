				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int> ;

int main() {
	int  n, t;
	scanf("%d%d",&n,&t);
	
	vector<int> v(n) ,tt(n) , res;
	for(int i = 0 ; i < n; i++){
		scanf("%d%d",&v[i],&tt[i] ) ;
	}
	
	int low = 0 , high = n ;
	while(low < high ){
		int mid = (low + high + 1 ) >> 1;
		
		vector<pii> temp ;
		for(int i = 0 ;i < n; i++){
			if(v[i] >= mid ){
				temp.emplace_back(tt[i],i) ;
			}
		}
		sort(temp.begin() , temp.end() ) ;
		bool ok = false ;
		
		int sz = temp.size() ;
		if(sz >= mid){
			int sum = 0;
			for(int i = 0 ; i < mid ; i++){
				sum += temp[i].first ;
			}
			if(sum <= t ){
				ok = true ;
				res.resize(mid) ;
				for(int i = 0 ; i < mid ; i++){
					res[i] = temp[i].second ;
				}
			}
		}
		if(ok){
			low = mid ;
		}
		else{
			high = mid - 1;
		}
	}
	int sz = (int)res.size() ;
	printf("%d\n%d\n",sz,sz) ;
	for(auto x : res ){
		printf("%d ",x+1);
	}
	puts("") ;
	
	return 0;
}
