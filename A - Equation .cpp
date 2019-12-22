				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

bool ok(int n ){
	
	int sq = sqrt(n) ;
	for(int i = 2; i <= sq ; i++){
		if(n%i == 0) return true ;
	}
	
	return false ;
}

int main()
{
	int n ;
	scanf("%d",&n) ;
	
	for(int i = n + 2 ; ; i++){
		if( ok(i) && ok(i-n) ){
			cout << i << " " << i - n << endl ;
			break ;
		}
	}

    return 0;
}
