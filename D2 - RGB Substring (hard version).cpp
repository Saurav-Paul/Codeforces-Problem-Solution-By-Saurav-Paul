#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
const int nax = 2e5+10;
char s[nax];

void solve(){
	int n , k ; scanf("%d%d",&n,&k);
	scanf("%s",s);
	
	string s1 = "RGB", s2 = "GBR" , s3 = "BRG";
	k --;
	char c = s1[k%3] , d=s2[k%3] , e=s3[k%3];
	k ++;
	int mn = k;
	int c1 = 0 , c2 = 0 , c3 = 0;
	
	for(int i = 0 ; i < k ; i ++){
		if(s1[i%3] != s[i])
			c1 ++;
		if(s2[i%3] != s[i])
			c2 ++;
		if(s3[i%3] != s[i])
			c3 ++;
	}
	
	mn = min({c1,c2,c3,mn});
	
	for(int i = k ; i < n ; i++){
		int t1=c1 , t2=c2 , t3=c3;
		
		if(s[i-k]=='R')
			t2--,t3--;
		else if(s[i-k]=='G')
			t1--,t3--;
		else if(s[i-k]=='B')
			t1--,t2--;
	
		c1 = t3 , c2 = t1 , c3 = t2;
		
		if(s[i]==d)
			c1++,c3++;
		else if(s[i]==e)
			c1++,c2++;
		else if(s[i]==c)
			c2++,c3++;
		
		mn = min({c1,c2,c3,mn});
		
	}
	
	
	printf("%d\n",mn);
}

int main()
{
	int q;
	scanf("%d",&q);
	while(q--)
		solve();
		
    return 0;
}
