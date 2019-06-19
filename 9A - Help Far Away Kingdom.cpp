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

int main()
{
	boost;
	string s;
	cin >> s;
	int sz =(int) s.size();
	int j=0;
	
	for(int i = 0 ; i < sz; i++){
		if(s[i]=='.' && s[i-1]=='9'){
			cout <<"GOTO Vasilisa." << endl;
			return 0;
		}
		if(s[i]=='.'){
			j = i-1;
			int temp = ctoi(s[i+1]);
			if(temp >= 5)
				s[i-1] += 1;
		}
	}
	
	for(int i= 0 ; i <= j ; i++)
		printf("%c",s[i]);
	puts("");
	
    return 0;
}
