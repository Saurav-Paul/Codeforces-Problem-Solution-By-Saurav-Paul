#include <bits/stdc++.h>
using namespace std;
const int nax = 2e5 + 5;
char s[nax];
char b[nax];
int main(){
	
	int n;
	scanf("%d %s",&n,s);
	
	vector < int > precom[29];
	for(int i = 0 ; i < n; i++){
		precom[s[i]-'a'].push_back(i+1);
	}
	
	int testcase; 
	scanf("%d",&testcase);
	
	for(int t = 0 ; t < testcase ; t++){
		vector< int > cnt(29) ;
		scanf("%s",b);
		int sz = strlen(b);
		int maxi = 0;
		for(int i = 0 ; i < sz ; i++){
			maxi = max(maxi,precom[b[i]-'a'][cnt[b[i]-'a']]);
			cnt[b[i]-'a'] ++;
		}
		printf("%d\n",maxi);
		
	}

	return 0;
}
