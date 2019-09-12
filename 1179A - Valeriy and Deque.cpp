				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
using pii = pair<int,int >;
using vec = vector<int> ;

int main()
{
	int n, q;
	scanf("%d%d",&n,&q);
	
	vec v(n),x;
	int mx = 0,mxid=-1;
	
	for(int &t : v)
		scanf("%d",&t);

	x = v;

	vector<pii > ansmin(1);
	for(int j = 1 ; j <= n ; j++){
			
			int a = x[0] , b = x[1];
			x.erase(x.begin());
			if(a > b)
				x[0] = a , x.emplace_back(b);
			else
				x.push_back(a);
			ansmin.emplace_back(a,b);
			if(j==n)
				v = x;
	}

	for(int i = 0 ; i < n ; i++){
		if(v[i] > mx){
			mx = v[i];
			mxid = i;
		}
	}
	v.erase(v.begin()+mxid);

	for(int i = 0 ; i < q ; i++){
		ll m; scanf("%lld",&m);

		if(m <= n){
			printf("%d %d\n",ansmin[m].first,ansmin[m].second);
		}
		else{
			m %= (n-1);
			if(m==0)
				m = n-1;
			m-= 2;
			if(m < 0)
				m += (n-1);
			printf("%d %d\n",mx,v[m]);
		}
	}

    return 0;
}
