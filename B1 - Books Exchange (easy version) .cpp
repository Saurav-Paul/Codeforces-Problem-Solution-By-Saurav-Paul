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

int find_it(int node){

	int cnt = 1;
	int curr = v[node]; node ++;
	while(curr != node){
		cnt ++;
		curr = v[curr-1] ;
	}
	
	return cnt;
}

void solve(){
	int n ; cin >> n;
	v = vector<int> (n) ;
	
	for(int &x : v){
		cin >> x ;
	}
	
	for(int i = 0 ; i < n ; i++){
		cout << find_it(i) <<" ";
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
