				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
using namespace std;

const int nax = 1e6+5;
char s[nax];

int main()
{
	scanf("%s",s);
	int sz = strlen(s);
	/*
	 * 1001001
	 * 1001010	+
	 * 0100101	/
	 * 0100110	+
	 * 0010011	/
	 * 0010100	+
	 * 0001010	/
	 * 0000101	/
	 * 0000110	+
	 * 0000011	/
	 * 0000100 	+
	 * 0000010	/
	 * 0000001 	/
	 * 
	 * */
	/*
	 * 111
	 * 1000	+
	 * 0100	/
	 * 0010	/
	 * 0001	/
	 * */
	 bool carry = 0;
	 int cnt = 0;
	
	 for(int i = sz-1 ; i >= 0 ; i--){
		 if(i==0 && !carry)
			break ;
		 if(!carry && s[i]=='1'){
			 carry = true;
			 cnt += 2;
		 }
		 else{
			 cnt ++;
			 if(s[i]=='0' && carry)
				cnt++;
			 
		 }
	 }
	 
	 printf("%d\n",cnt);
	 
    return 0;
}
