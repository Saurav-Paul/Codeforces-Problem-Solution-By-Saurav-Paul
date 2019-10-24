				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

using vec = vector<int> ;
vec v ;
const int nax = 2e5 + 90 ;
vector<int> cnt(nax,0) ;
int curr = 0 ;

int dfs(int node , int start){
	if(node == start){
		return cnt[node-1] = curr ;
	}
	curr ++;
	return cnt[node-1] = dfs(v[node-1], start) ;
}

void solve(){
	int n ; cin >> n;
	v = vector<int> (n) ;
	cnt = vector<int> (n+90, 0 ) ;
	
	for(int &x : v){
		cin >> x ;
	}
	
	for(int i = 0 ; i < n ; i++){
		if(cnt[i]==0){
			curr = 1 ;
			dfs(v[i] , i+1 ) ; 
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		cout << cnt[i] <<" ";
	}
	cout << endl ;
	
}

int main()
{
	boost ;
	int q ;
	cin >> q;
	while(q--){
		solve() ;
	}

    return 0;
}
