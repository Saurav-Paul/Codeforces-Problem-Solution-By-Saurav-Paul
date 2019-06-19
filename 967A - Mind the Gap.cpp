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

typedef pair<int,int> Pair;

int main()
{
	int n, s;
	scanf("%d%d",&n,&s);
	vector < Pair > v(n);
	for(auto &x : v)
		scanf("%d%d",&x.first,&x.second);
	
	
	{
		int sum = v[0].first*60 + v[0].second;
		if(sum >= s+1){
		puts("0 0");
		
		return 0;	
		}
		
	}
	
	
	for(int i = 1 ; i < n ; i++){
		int sum = (v[i].first-v[i-1].first-1) * 60 
				+ 60-v[i-1].second 	+ v[i].second;
				
		int temp = 2*s+1;
		if(temp < sum){
			temp = s+1;
			int hr = v[i-1].first , mi = v[i-1].second;
			while(temp--){
				mi++;
				if(mi==60)
					hr++,mi=0;
			}
			printf("%d %d\n",hr,mi);
			return 0;
		}
	}
	
	{
			int temp = s+1;
			int hr = v[n-1].first , mi = v[n-1].second;
			while(temp--){
				mi++;
				if(mi==60)
					hr++,mi=0;
			}
			printf("%d %d\n",hr,mi);
	}
	
    return 0;
}
