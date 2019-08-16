#include<bits/stdc++.h>
using namespace std;
#define dbg(x)	cerr <<#x<<":"<<x
#define dn		cerr << endl;
 
 
int main(){
	int n; scanf("%d",&n);
	vector<int> v(n);
	
	for(auto &x : v)
		scanf("%d",&x);
	
	sort(v.begin(),v.end());
	
	int prev = 0, cnt = 0;
	for(auto now : v){
		
		if(now -1 > prev){
			cnt ++;
			prev = now - 1;
		}
		else if(now -1 == prev ){
			cnt ++;
			prev = now ;
		}
		
		else if(now == prev){
			prev = now + 1;
			cnt ++;
		}
		
		
		
	}
	printf("%d\n",cnt);
	
	return 0;
}
