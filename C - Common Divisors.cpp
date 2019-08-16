#include<bits/stdc++.h>
using namespace std;
#define dbg(x)	cerr <<#x<<":"<<x
#define dn		cerr << endl;
 
void find_divisor(long long int n){
	
	long long int cnt = 0;
	for(long long int i = 1 ; i * i <= n ; i++){
		
		if(n%i == 0){
			if(i == n/ i)
				cnt ++;
			else
				cnt += 2;
		}
		
		
	}
	
	printf("%lld\n",cnt);
	
}
 
int main(){
	int n; scanf("%d",&n);
	vector<long long int> v(n);
	
	for(auto &x : v)
		scanf("%lld",&x);
		
	long long int gcd = v[0];
	for (int i = 1 ; i < n; i++)
		gcd = __gcd(gcd,v[i]);
	
	//~ dbg(gcd); dn ;
	
	find_divisor(gcd);
	
	return 0;
}
