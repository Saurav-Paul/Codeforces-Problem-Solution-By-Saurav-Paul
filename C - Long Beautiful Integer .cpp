				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define boost		          ios_base::sync_with_stdio(0);

int main()
{
	boost ;
	string s ; int n , k ;
	cin >> n >> k >> s;
	
	string sam = "" ;
	for(int i = 0 ; i < k ; i++){
		sam += s[i] ;
	}

	for(int i = k, x = 0 ; i < n ; i++, x ++){
		x %= k ;
		
		if( s[i] < sam[x]){
			break ;
		}
		else if( s[i] > sam[x] ){
			
			int carry = 1;
			int y = k - 1;
			while( carry ){
				
				int op = carry + sam[y] ;
				if( op <= '9' ) carry = 0 ;
				else{
					op = '0' ;
				}
				sam[y] = op ; 
				y --;
				
			}
			break ;
		}
		
		
	}
	
	cout << n << endl ;
	for(int i = 0 ,x = 0; i < n ; i++ , x ++){
		
		cout << sam[x%k] ;
	}
	cout << endl ;
    return 0;
}
