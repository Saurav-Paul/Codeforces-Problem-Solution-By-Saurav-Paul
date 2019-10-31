 				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
	
	int n , k , d ;
	scanf("%d%d%d",&n,&k,&d) ;
	vector<int> v(n) ;
	for(int &x : v ) {
		scanf("%d",&x) ;
	}
	
	map<int, int> m_map ;
	int mn = 0 , cnt= 0;
	for(int i = 0 ; i < d ; i++ ){
		if(m_map[v[i]] == 0 ){
			cnt ++;
		}
		m_map[v[i]] ++ ;
	}
	mn = cnt ;
	for(int i = d ; i < n ; i ++){
		m_map[v[i-d]] --;
		if(m_map[v[i-d]] == 0 ) cnt --;
		if(m_map[v[i]] == 0 ) cnt ++;
		m_map[ v[i] ] ++;
		mn = min(mn, cnt ) ;
	}
	printf("%d\n",mn) ;
}

int main()
{
	int testcase ; scanf("%d",&testcase ) ;
	for(int i = 1 ; i <= testcase ; i++){
		solve() ;
	}

    return 0;
}
