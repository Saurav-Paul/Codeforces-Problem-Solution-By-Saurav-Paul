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

using vec = vector<int> ;

bool check(vec &parrent,vec &notleaf,int n){
	bool flag = true ;
	vec v(n+1);
	for(int i = 2 ; i <= n; i++){
		if(notleaf[i]==false){
			v[parrent[i]] ++;
		}
	}
	
	for(int i = 1 ; i <= n ; i++)
		if(notleaf[i] and v[i] < 3){
			flag = false;
			break ;
		}
	return flag ;
}


int main()
{
	int n; scanf("%d",&n);
	vec parrent(n+1),notleaf(n+1);
	for(int i = 2,temp ; i <= n ; i++){
		scanf("%d",&temp);
		parrent[i] = temp;
		notleaf[temp] ++;
	}
	
	if(check(parrent,notleaf,n))
		puts("Yes");
	else
		puts("No");
	
    return 0;
}
