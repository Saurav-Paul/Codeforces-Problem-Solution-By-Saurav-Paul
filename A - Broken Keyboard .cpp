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

void solve(){
	
	string s ; cin >> s;
	
	set<char> ans;
	int cnt = 1;

	for(int i = 1 ; i <= (int)s.size() ; i ++){
		
		if(i == (int)s.size() ){
			if(cnt&1){
				 ans.insert(s[i-1]) ;
			 }
			break ;
		}
		
		if(s[i-1] != s[i]){
			if(cnt&1){
				ans.insert(s[i-1]) ;
			}
			cnt = 0;
		}
		cnt ++;
		
	}

	for(char x : ans){
		cout<<x;
	}
	cout << endl ;
	
}

int main()
{
	boost ;
	int n; cin>> n;
	while(n--) solve() ;

    return 0;
}
