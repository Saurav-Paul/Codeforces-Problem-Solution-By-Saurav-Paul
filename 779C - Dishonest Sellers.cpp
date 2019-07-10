				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;

class items{
	public :
		int before, after;
	bool operator < (const items p){
		return after-before > p.after-p.before ;
	}
};

int main()
{
	int n , need;
	scanf("%d%d",&n,&need);
	
	vector <items > v(n);
	for(int i = 0 ; i < n; i++){
		scanf("%d",&v[i].before);
	}
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&v[i].after);
		
	}
	
	sort(all(v));
	int taka = 0;
	for(int i = 0 ; i < need ; i++)
		taka += v[i].before ;
	
	for(int i = need ; i < n; i++)
		taka += min(v[i].before, v[i].after);
	
	printf("%d\n",taka);
    return 0;
}
