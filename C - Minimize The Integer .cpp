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

	 string s ; cin >> s;
	 string odd = "", even="";
	 
	 for(auto c : s ){
		 if(c&1) odd += c;
		 else even += c;
	 }
	 
	 int osz =(int) odd.size() ;
	 int esz =(int) even.size() ;
	 

	 
	 int x = 0 , y = 0;
	 string ans = "";
	 while(x < osz or y < esz ){
		 
		 if(x ==osz ){
			 ans += even[y];
			 y ++;
		 }
		 else if( y == esz ){
			 ans += odd[x] ;
			 x ++;
		 }
		 else if( even[y] < odd[x] ){
			 ans += even[y];
			 y ++;
		 }
		 else if( odd[x] < even[y] ){
			 ans += odd[x] ;
			 x ++;
		 }
		 
	 }
	 
	 cout << ans << endl ;
	 
	 
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
