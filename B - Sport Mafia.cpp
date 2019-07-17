
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	long long int n , k; cin >> n >> k;
	int eat = 0;
	bool flag = false;
	long long int sum = 0;
	for(int i = 1 ; i <= n ; i++){
		sum += i ;
		if(sum >= k){
			if(k==(sum-(n-i))){
				flag = true ;
				eat = n- i;
				break ;
			}
		}
	}
	if(flag)
		cout << eat << endl; 
	else
		assert(false);
		
    return 0;
}
