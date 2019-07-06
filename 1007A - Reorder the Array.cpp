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

int main()
{
	
	int n; 
	scanf("%d",&n);
	vector < int > v;
	for(int i = 0 ; i< n ; i++){
		int temp;
		scanf("%d",&temp);
		v.eb(temp);
	}
	sort(all(v));
	int cnt = 0;
	
	for(int i= 0 , j = 1; j < n ; ){
		if(v[i] < v[j]){
			cnt ++ ;
			i++;
		}
		j++;
	}
	
	printf("%d\n",(int)cnt);
    return 0;
}
