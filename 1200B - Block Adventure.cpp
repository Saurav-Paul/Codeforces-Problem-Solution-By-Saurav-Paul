				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;

using vec = vector<int> ;

void solve(){
	int n, m, k;
	scanf("%d%d%d",&n,&m,&k);
	vec v(n);
	for(auto &x : v)
		scanf("%d",&x);
	int cantake = m;
	for(int i= 0 ; i < n- 1; i++){
		cantake += v[i] - max(0,v[i+1]-k) ;
		if(cantake<0){
			puts("NO");
			return ;
		}
	}
	puts("YES") ;
	
}

int main()
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
		solve();

    return 0;
}
