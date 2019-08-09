#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;
using vec = vector<ll> ;

void improved(vec &v , vec &pref, int n){
	ll l , r ;
	scanf("%lld%lld",&l,&r);
	ll w = r-l + 1;
	ll ind = lower_bound(v.begin(),--v.end(), w) - v.begin();
	ll ans = (n-ind) * w + pref[ind];
	printf("%lld ",ans);
}

int main()
{
	int n; scanf("%d",&n);
	
	vec v(n);
	for(ll &x : v)
		scanf("%lld",&x);
	
	sort(all(v));

	for(int i =0 ; i < n- 1; i++)
		v[i] = v[i+1]-v[i];
	
	sort(v.begin(),--v.end());
		
	int q;	scanf("%d",&q);
	
	vec pref(n);
	for(int i = 1 ; i < n; i++)
		pref[i] = pref[i-1] + v[i-1];
	
	
	for(int i= 0 ; i < q ; i++)
		 improved(v,pref,n);
	puts("");

    return 0;
}
