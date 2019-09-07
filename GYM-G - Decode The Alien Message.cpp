#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	scanf("%d",&n);
	string s="";
	while(n--){
		int temp;
		scanf("%d",&temp);
		s += (temp&1?'0' : '1');
	}
	bool ok = false;
	for(auto x : s){
		ok = (ok || x=='1');
		if(ok)
			printf("%c",x);
	}
	puts("");
}

int main(){
	
	int testcase;
	scanf("%d",&testcase);
	for(int i = 1  ; i <= testcase ; i++)
	{	printf("Case %d: ",i);
		solve();
	}
	return 0;
}
