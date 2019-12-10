				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void find_divisors(vector<long long int> &divisors , long long int n ) {
	
	long long int lim = sqrt(n) ;
	for(int i = 1 ; i <= lim ; i++){
		if(n%i == 0){
			divisors.push_back(i);
			if(n/i != i){
				divisors.push_back(n/i) ;
			}
			
		}
	}
}

int main() {
	long long int n , k ;
	scanf("%lld%lld",&n,&k) ;
	
	vector<long long int> divisors;
	find_divisors(divisors,n) ;
	sort(divisors.begin() , divisors.end() ) ;
	
	if(k > (int)divisors.size() ){
		puts("-1") ;
	}
	else 
		printf("%lld\n",divisors[k-1]) ;
	
	return 0 ;
}
