#include<bits/stdc++.h>
using namespace std;
 
void solve () {
	int h , m ;
	cin >> h >> m ;
	h = (24 - h ) * 60 ;
	cout << h - m  << endl ;
}
 
int main()
{
	ios_base::sync_with_stdio(false) ;
	int t ; cin >> t ;
	while(t--){
		solve () ;
	}
    return 0;
}
