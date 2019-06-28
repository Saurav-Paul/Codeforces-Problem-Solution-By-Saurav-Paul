				/*Saurav Paul*/
#include<bits/stdc++.h>

using namespace std;

const int nax = 1e6+10;
char b[nax];
char c[nax];

int main()
{
	scanf("%s%s",b,c);
	int lenb = (int)strlen(b);
	int lenc = (int)strlen(c);
	int cntc = 0,cntb=0;
	for(int i = 0 ; i  < lenc ; i++){
		if(c[i]=='1')
			cntc++;
		if(b[i]=='1')
			cntb++;
	}
	int ans = 0;
	int i = 0 , j = lenc-1;
	while(j < lenb){
		if((cntc&1)==(cntb&1))
			ans++;
		i++; j++;
		if(b[i-1]=='1')
			cntc--;
		if(b[j]=='1')
			cntc++;
	}
	
	printf("%d\n",ans);
	
    return 0;
}
