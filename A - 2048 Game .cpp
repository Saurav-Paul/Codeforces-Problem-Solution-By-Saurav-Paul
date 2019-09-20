				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;


void solve(){
	map <int,int> cnt;
	set <int> myset;
	
	int n; scanf("%d",&n);
	for(int i = 0 ; i < n; i++){
		int a ; scanf("%d",&a);
		cnt[a] ++;
		myset.insert(a);
	}
	bool ok = true;
	while(ok){
		ok = false;
		for(auto x : myset){
			if(x > 2048){
				break ;
			}
			if(cnt[x] == 0)
				continue ;
			if(x==2048 ){
				
				puts("YES");
				return ;
			}
			if(cnt[x] > 1){
				int temp = x + x;
				cnt[x] -= 2;
				cnt[temp] ++;
				ok = true;
				myset.insert(temp);
				break ;
			}
		}
		
	}

	puts("NO");
}

int main()
{
	int testcase;
	scanf("%d",&testcase);
	for(int i = 1 ; i <= testcase ; i++)
		solve();
	
    return 0;
}
