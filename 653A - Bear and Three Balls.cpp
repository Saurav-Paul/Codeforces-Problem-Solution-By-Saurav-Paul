#include<bits/stdc++.h>
using namespace std;
const int nax = 1e3 + 5;
bool v[nax];

void ara_read(int n){
	for(int i = 0 ; i < n; i++){
		int temp ; scanf("%d",&temp);
		v[temp] = true;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	ara_read(n);
	for(int i = 1 ; i <= 1000 ; i++)
		if(v[i-1] and v[i] and v[i+1]){
			puts("YES");
			return 0;
		}
	
	puts("NO");
	
	return 0;
}
