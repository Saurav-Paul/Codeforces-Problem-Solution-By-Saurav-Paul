				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);
#pragma GCC optimize("O3")
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define eb                    emplace_back
#define mp                    make_pair
#define all(p)                p.begin(),p.end()

using pii = pair<int,pair<int,int>>;

int main()
{
	boost ;
	int n;
	cin >> n ;
	int st = 0 , sp = n-1 ;
	vector<int> v(n) ;
	vector<pii>  aodd , aeven, aboth , border;
	bool rem[n+1] = {} ;
	for(auto &x : v) cin >> x , rem[x] = true;
	int odd = 0 , even = 0 ;
	for(int i =1 ; i <= n; i ++){
		if(rem[i] == false){
			if(i&1) odd ++;
			else even++;
		}
	}

	if(v[0] == 0){
		bool ok = false ;
		for(int i = 0 ; i < n ; i++){
			if(v[i]!= 0){
				border.emplace_back(i,make_pair(0,i-1));
				ok = true ;
				st = i ;
				break ;
			}
		}
		if(!ok){
			cout << (n>1) << endl ;
			return 0 ;
		}
	}
	if(v[n-1] == 0){
		for(int i = n-1 ; i >= 0 ; i--){
			if(v[i]!= 0){
				border.emplace_back(n-i-1,make_pair(i+1,n-1));
				sp = i ;
				break;
			}
		}
	}

	for(int i = st ; i <= sp ; i++){
		if(v[i] == 0){
			bool ev = false  ,od = false;
			if(v[i-1]&1) od = true;
			else ev = true ;
			int j = i ;
			for( ; j <= sp ; j ++){
				if(v[j] != 0){
					break ;
				}
			}
			if(v[j]&1) od = true ;
			else ev = true ;
			if(ev && od){
				aboth.eb(j-i,mp(i,j-1)) ;
			}
			else if(ev){
				aeven.eb(j-i,mp(i,j-1));
			}
			else{
				aodd.eb(j-i,mp(i,j-1));
			}
			i = j-1;
		}
	}
	sort(all(aboth));
	sort(all(aodd));
	sort(all(aeven));
	sort(all(border));
	
	for(auto x : aodd){
		if(odd < x.first) break ;
		int i = x.second.first ;
		int j = x.second.second ;
		for( ; i <= j && odd; i++){
			v[i] = 1;
			odd-- ;
		}
	}	
	for(auto x : aeven){
		if(even < x.first) break ;
		int i = x.second.first ;
		int j = x.second.second ;
		for( ; i <= j && even; i++){
			v[i] = 2;
			even-- ;
		}
	}	

	for(auto x : border){

		int i = x.second.first , j = x.second.second;
		bool ok  = true ;
		bool okk = true ;
		if(i == 0){
			ok = (v[j+1]&1);
			okk = false ;
		}
		else{
			ok = (v[i-1]&1) ;
		}
		while(i <= j){
			int t = 0;
			if(okk){
				t = i ;
				i++ ;
			}
			else{
				t = j ;
				j--;
			}
			if(ok){
				if(odd){
					v[t] = 1;
					odd-- ;
				}
				else{
					v[t] = 2;
					even --;
				}
			}
			else{
				if(!even){
					v[t] = 1;
					odd-- ;
				}
				else{
					v[t] = 2;
					even --;
				}
			}
		}

	}


	bool ok = false;
	for(int i = st ; i < n ; i++){
		if(v[i] == 0){
			if(ok){
				if(odd){
					v[i] = 1;
					odd --;
				}
				else{
					v[i] = 2;
					even -- ;
				}
			}
			else {
				if(!even){
					v[i] = 1;
					odd --;
				}
				else{
					v[i] = 2;
					even -- ;
				}
			}
		}
		ok = (v[i]&1) ;
		
	}

	if(odd < 0 || even < 0) assert(false);

	int cnt = 0;

	for(int i = 1; i < n ; i++){
		if( (v[i-1]&1) != (v[i]&1) )
			cnt ++;
	}
	cout << cnt << endl ;

    return 0;
}
