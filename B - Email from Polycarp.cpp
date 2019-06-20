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
///////////////////////

void solve(){
	
	string a , b;
	cin >> a >> b;
	int alen = (int)a.size();

	int blen = (int)b.size();
	if(alen > blen){
		puts("NO");
		return ;
	}
	vector <pair < char,int > > v1,v2;
	for(int i =0 ; i < alen ; i++){
		
		
		int cnt = 0;
		int j = i;
		while (j < alen){
			if(a[i]!=a[j])
				break ;
			cnt ++;
			j++;
		}
		v1.eb(a[i],cnt);
		i= j-1 ;
	}
	
	a = b;
	alen = blen;
	for(int i =0 ; i < alen ; i++){
		
		
		int cnt = 0;
		int j = i;
		while (j < alen){
			if(a[i]!=a[j])
				break ;
			cnt ++;
			j++;
		}
		v2.eb(a[i],cnt);
		i= j-1 ;
	}

	alen = v1.size();
	blen = v2.size();
	if(alen!=blen){
		puts("NO");
		return ;
	}
	
	for(int i =0 ; i < alen ; i++){
		if(v1[i].first!=v2[i].first){
			puts("NO");
			return ;
		}
		if(v1[i].second > v2[i].second){
			puts("NO");
			return ;
		}
		
	}
	puts("YES");
	
}

int main()
{
	boost;
	int n;
	cin >> n;
	while(n--)
		solve();
    return 0;
}
