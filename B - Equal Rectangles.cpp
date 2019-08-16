#include<bits/stdc++.h>
using namespace std;
#define dbg(x)	cerr <<#x<<":"<<x
#define dn		cerr << endl;
 
void solve(){
	int n;
	scanf("%d",&n);
	vector<int> v(4*n);
	map <int, int> m;
	bool ok = true;
	for(auto &x : v){
		scanf("%d",&x);
		m[x] ++;
	}
		
	for(auto x : m){
		if(x.second & 1){
			ok = false;
			break ;
		}
	}
	
	sort(v.begin(),v.end());
	int temp = v[0] * v.back();
	
	for(int i = 0 ; i < n; i++){
		if(temp != v[i*2]*v[n*4-i*2-1]){
			ok = false;
			break ;
		}
	}
	
	puts(ok?"YES":"NO");
}
 
int main(){
	int q;
	scanf("%d",&q);
	while(q--)
		solve();
	
}
