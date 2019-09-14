				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n; scanf("%d",&n);
	
	vector<int> v(n) , rem(105);
	string ans = "";
	for(int i = 0 ; i < n ; i++ ) ans += 'x';
	
	for(int i = 0 ;i  < n; i++){
		int a ; scanf("%d",&a);
		v[i] = a;
		rem[a] ++;
	}
	int a = 0 , b = 0;
	for(int i = 0 ; i < n; i++){
		if(rem[v[i]] == 1){
			if(a < b ){
				a ++;
				ans[i] = 'A' ;
			}
			else{
				b ++;
				ans[i] = 'B' ;
			}
		}
	}
	bool ok = (a == b) ;

	for(int i = 0 ; i < n; i++ ){
		if(rem[v[i]] == -1 )
			ans[i] = 'A' ;
		else if(rem[v[i]] == -2 )
			ans[i]= 'B' ;
		else if(ans[i] == 'x'){
			if(ok == false){
				if(rem[v[i]] == 2){
					rem[v[i]] =-1;
					ans[i] = 'A' ;
					continue ;
				}
				bool temp = false;
				if( a < b ){
					ans[i] = 'A' ;
					a ++;
					temp = true;
				}
				else{
					ans[i] = 'B' ;
					b ++;
				}

				ok = true ;
				rem [ v[i] ] = (!temp ? -1 : -2 ) ;

			}
			else{
				rem[v[i]] = -1;
				ans[i] = 'A' ;
			}
		}
	}
				
	if(a==b)
		printf("YES\n%s\n",ans.c_str() ) ;
	else
		puts("NO");
		
    return 0;
}
