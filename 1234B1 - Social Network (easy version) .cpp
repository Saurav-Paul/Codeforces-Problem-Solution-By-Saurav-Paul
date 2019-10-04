				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void back(int &x,int  k) {
	if(x==0) x = k - 1;
	else x-- ;
}
void go ( int &x , int k ){
	x++ ;
	if(x >= k ) x = 0;
}

int main()
{
	int n , k ;
	scanf("%d%d",&n,&k);

	vector<int> store(k+5) ;
	int nax = store.size() ;
	int st =nax-1 ;
	int sp = st ,cnt = 0;
	unordered_map <int , int > mymap ;

	for(int i = 0 ;i < n; i++){
		int id ; scanf("%d",&id) ;
		
		if(mymap[id] == 0 ){
			if(cnt == k ){
				mymap[store[sp]]--;;
				store[sp] = 99;
				store[st] = id ;
				back(st,nax);
				back(sp,nax);
				mymap[id] ++ ;
			}
			else{
				cnt ++ ;
				store[st] = id ;
				back(st,nax);
				mymap[id] ++;
			}
		}

	}
	
	printf("%d\n",cnt);
	go(st,nax);
	while(cnt--){
		if(st == nax ) st = 0;
		printf("%d ",store[st]);
		st ++;
	}
	puts("");
    return 0;
}
