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

void solve() {
	int n ; cin >> n;
	bool ok = false;
	
	int imbalanced  = 0 , balanced = 0;
	
	for(int i =0 ; i < n; i++){
		
		string s ; cin >> s ;
		int sz = (int) s.size() ;
		if(sz&1){
			ok = true ;
			continue ;
		}
		int one = 0 , zero = 0;
		for(char c : s){
			if(c=='1'){
				one ++;
			}
			else if(c=='0'){
				zero ++;
			}
			else assert(false) ;
		}
		
		if(one&1 or zero&1){
			imbalanced ++ ;
		}
		else{
			balanced++;
		}
		
		
	}
	
	if(ok or imbalanced%2==0){
		cout << n << endl;
	}
	else{
		cout << n - 1 << endl ;
	}
	
	
}

int main()
{
	boost;
	int q; cin >> q;
	while(q--){
		solve() ;
	}

    return 0;
}
