				/*Saurav Paul*/
#include<bits/stdc++.h>
#define all(p)                p.begin(),p.end()
using namespace std;

using ll = long long int ;

int main()
{
	ll n , m ;
	scanf("%lld%lld",&n,&m) ;
	vector<ll> a(n) , b(n) ;
	map < int , int > amp , bmp, tmp ;
	for(auto &x : a) scanf("%lld",&x) , amp[x] ++;
	for(auto &x : b) scanf("%lld",&x) , bmp[x] ++;
	sort(all(a));
	sort(all(b));
	
	if(a == b) {
		puts("0") ;
		return 0 ;
	}
	
	ll ans = 1e18+90 ;
	
	for(auto x : amp){
		for(auto y : bmp){
			if(x.second == y.second){
				ll n1 = x.first ;
				ll n2 = y.first ;
				
				tmp = bmp ;
				
				if( n2 < n1 ){
					n2 += m ;
				}
				
				int need = n2 - n1 ;
				if( need > ans ) continue ;
				vector<ll> test = a ;
				bool ok = true ;
				for(auto &z : test){
					z = ( z + need ) % m ;
					if(tmp[z] == 0){
						ok = false ;
						break ;
					}
					tmp[z] -- ;
				}
				if(ok==false) continue ;
				
				ans = need ;

			}
		}
		break ;
	}
	
	printf("%lld\n",ans) ;

    return 0;
}
