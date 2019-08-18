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

void solve(vector<int> &v, int n, int k , int l){
	int ind = upper_bound(all(v),v[0]+l) - v.begin();
	int cnt = 0;
	ll ans = 0;
	
	if(ind >= n)
	for(int i = 0 ; i < n ; i++){
		ans += v[cnt];
		
		for(int j = 0 ; j < k ; j++){
			if(ind - cnt > n - i -1)
				cnt ++;
			else
				break ;
		}
		
	}
	printf("%lld\n",ans);
}


int main()
{
	int n, k , l;
	scanf("%d%d%d",&n,&k,&l);
	int lim = n*k;
	vector<int> v(lim);
	for(int &x : v)
		scanf("%d",&x);
		
	sort(all(v));
	solve(v,n,k,l);

    return 0;
}
