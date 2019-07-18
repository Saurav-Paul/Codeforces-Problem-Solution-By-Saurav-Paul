#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n; scanf("%d",&n);
	long long int sum = 0;
	vector <int> v(n);
	map<long long int , int > mymap;
	int cnt = 0;
	for(int &x : v)
		scanf("%d",&x);
		
	sort(v.begin(),v.end());
	
	for(int x : v){
		mymap[x]++;
		if(mymap[x]==2){
			cnt ++ ;
			if(mymap[x-1])
				cnt = 10;
		}
		if(mymap[x]> 2)
			cnt = 10;
			
	}
	
	if(cnt > 1 or mymap[0]>1){
		puts("cslnb");
		return 0;
	}
	for(int i=0; i < n; i++){
		sum += max(0,v[i]-i);
	}
	puts(sum&1 ? "sjfnb" : "cslnb");
	
	return 0;
}
