				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

const int nax = 5000000+10;
vector<int> primelist;
vector<int> cum_cnt(nax);
bool notprime[nax] ;

void sieve(){
	primelist.emplace_back(2);
	int lim = sqrt(nax+5);
	for(int i = 3 ; i <= lim ; i+= 2){
		if( notprime[i] == false){
			primelist.emplace_back(i);
			int add = (i<<1);
			for(int j = i+add ; j <= nax-1 ; j += add)
				notprime[j] = true;
		}
	}
}

void prep(){
	sieve();
	
	vector<int> dp(nax+2);
	for(int i = 2 ; i < nax ; i++){
		int cnt = 0 , num = i;
		if(notprime[i] == false and i&1)
			cnt = 1;
		else
		for(auto x : primelist){
			if(num%x == 0){
				num /= x;
				cnt  = 1 + dp[num];
				break ;
			}
			else if( x > num )
				break ;
		}
		dp[i] = cnt ;
	}

	for(int i = 1 ; i < nax ; i++)
		cum_cnt[i] = cum_cnt[i-1] + dp[i];

}

int main()
{
	prep();
	int t ; scanf("%d",&t);

	for(int i = 0 ; i < t ; i ++){
		int a , b ; scanf("%d%d",&a,&b);
		printf("%d\n", cum_cnt[a] - cum_cnt[b] );
	}

    return 0;
}
