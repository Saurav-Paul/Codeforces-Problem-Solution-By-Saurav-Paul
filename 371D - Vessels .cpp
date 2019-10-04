				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

vector<int> cap,have,linked;
int n ;

int add(int index , int water ){
	if(index == n) return index ;
	
	int canhave = cap[index] - have[index] ;
	canhave = min(canhave , water ) ;
	water -= canhave ;
	have[index] += canhave ;
	if(water > 0 )
		return linked[index] = add(linked[index] , water ) ;
	else
		return index ;
}
int main()
{
	scanf("%d",&n);
	cap.resize(n) ;
	have.resize(n);
	linked.resize(n);
	
	for(int &x : cap) {
		scanf("%d",&x );
	}
	
	for(int i = 0 ;i  < n ; i++) linked[i] = i + 1;
	
	int query ; scanf("%d",&query) ;
	
	for(int i = 1 ; i<= query ; i++){
		int op ; scanf("%d",&op);
		if(op == 1){
			int xi , pi;
			scanf("%d%d",&pi,&xi);
			add(pi-1,xi);
		}
		else if(op == 2){
			int kth; scanf("%d",&kth) ;
			printf("%d\n",have[kth-1] ) ;
		}
		else assert(false) ;
	}
	
    return 0;
}
