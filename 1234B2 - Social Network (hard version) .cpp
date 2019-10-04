				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , k ;
	scanf("%d%d",&n,&k);

	map <int , int > mymap ;
	deque<int> dq;
	int cnt = 0;
	
	for(int i = 0 ;i < n; i++){
		int id ; scanf("%d",&id) ;
		
		if(mymap[id] == 0){
			if(cnt == k){
				mymap[dq.back() ] = 0;
				dq.push_front(id) ;
				dq.pop_back() ;
			}
			else{
				cnt ++;
				dq.push_front(id);
			}
			mymap[id] = 1 ;
			
		}

	}
	
	printf("%d\n",cnt);
	for(auto x : dq)
		printf("%d ",x);
	puts("");
	
    return 0;
}
