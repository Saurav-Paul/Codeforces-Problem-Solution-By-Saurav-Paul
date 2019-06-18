
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

const int INF = 1e9 + 99;
typedef pair<int,int> Pair;
typedef vector<int> vec;;

char s[105];
int main()
{
	scanf("%s",s);
	int sz = (int)strlen(s);
	
	for(int i = 0 ; i < sz-2; i ++){
		if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]
			&& s[i]!='.' && s[i+1]!='.' && s[i+2]!='.'){
				puts("Yes");
				return 0;
			}
	}
	puts("No");
    return 0;
}
