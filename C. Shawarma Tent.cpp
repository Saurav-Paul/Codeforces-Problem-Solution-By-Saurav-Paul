/**
 *    author:  Saurav_Paul 
 *    created: 09.01.2020 23:40:07       
**/

#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);


int main()
{
	boost ;
	int student , sx  , sy ;
	cin >> student >> sx >> sy ;
	int l , r, u , d;
	l = r = u = d = 0 ;
	for(int i = 0 ; i < student ; i ++){
		int x , y ; cin >> x >> y;
		if(x < sx) l++ ;
		if(x > sx) r++;
		if(y < sy) d++;
		if(y > sy) u++;
	}
	int ans = max({l,r,u,d}) ;
	if(ans == l) sx -= 1 ;
	else if( ans == r) sx += 1;
	else if(ans == d) sy -= 1;
	else sy += 1;
	cout <<ans <<endl << sx << " "<< sy << endl ;

    return 0;
}
