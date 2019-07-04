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

using namespace std;

int main()
{
	set<string> poland,enemy,both,used;
	const int nax = 1e3+5;
	char s[nax];
	int n, m;
	scanf("%d%d",&n,&m);
	
	for(int i = 0 ; i < n ; i++){
		scanf("%s",s);
		
		if(used.count(s))
			continue ;
		poland.insert(s);
		used.insert(s);
	}
	
	for(int i = 0 ; i < m ; i++){
		scanf("%s",s);
		if(used.count(s)){
			if(poland.count(s)){
				both.insert(s);
				poland.erase(s);
			}
		}
		else{
			used.insert(s);
			enemy.insert(s);
		}
	}
	
	int psz = poland.size();
	int bsz = both.size();
	int esz = enemy.size();

	int temp = bsz/2;
	esz += temp;
	psz += (bsz-temp);
	
	puts(psz > esz ? "YES" : "NO");
	
    return 0;
}
