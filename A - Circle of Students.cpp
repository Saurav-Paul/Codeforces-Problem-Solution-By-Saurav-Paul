#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	int n;
	scanf("%d",&n);
	//~ cerr << n <<":" << n <<endl;
	vector <int> v(n);
	for(auto &x : v)
		scanf("%d",&x);
	bool vis[n+10]={};
	bool ok= true;
	vis[v[0]] = true;
	for(int i = 1; i < n; i++){
		//~ cerr << v[i] <<vis[v[i]] << endl;
		if(vis[v[i]] or abs(v[i]-v[i-1]) != 1){
			if(abs(v[i]-v[i-1])==n-1 and ok){
				ok = false;
			}
			else{
			puts("NO");
			return ;
		}
		}
		vis[v[i]] = true;
	}
	
	puts("YES");
	
}
 
int main(){
	int q;
	scanf("%d",&q);
	while(q--)
		solve();
	
}
