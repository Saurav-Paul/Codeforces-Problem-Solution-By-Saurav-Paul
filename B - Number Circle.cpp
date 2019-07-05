				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back

using namespace std;

int main()
{
	/**
	 * 2 3 4
	 * 3 2 4
	 * 
	 * 
	 * 1 2 3 4 4
	 * 2 1 3 4 4
	 * 
	 * 2 1 4 4 3
	 * 
	 * 5 8 13
	 * 8 5 13
	 * 10 1 100 1000
	 * 
	 * 1 2 3 4 5 6 10
	 * 2 1 3 5 4 6 10
	 * 2 1 4 3 6 10 5
	 * 
	 * 
	 * 4 3 1 3 4
	 * 
	 * 
	 * **/
	
	
	int n;
	scanf("%d",&n);
	vector < int > v;
	for(int i = 0 ; i< n; i++){
		int temp;
		scanf("%d",&temp);
		v.eb(temp);
	}
	
	sort(v.rbegin(),v.rend());
	
	vector < int > odd, even;
	
	for(int i = 0 ; i< n; i++){
		
		if(i&1)
			even.eb(v[i]);
		else
			odd.eb(v[i]);
	}

	vector < int > ans;
	int sz =(int) odd.size();
	for(int i = 0 ; i < sz ; i++){
		ans.eb(odd[i]);
	}
	sz =(int) even.size()-1;
	for(int i = sz ; i >=0 ; i--){
		ans.eb(even[i]);
	}

	bool flag = true;
	for(int i = 0 ; i < n ; i++){
		if(i==n-1){
			if(ans[i] < ans[i-1] + ans[0])
				continue ;
			flag = true;
			break ;
		}
		else if(i){
			if(ans[i] < ans[i-1] + ans[i+1])
				continue ;
			flag = false;
			break ;
		}
		else{
			if(ans[i] < ans[n-1] + ans[i+1])
				continue ;
			flag = false;
			break ;
		}
	}
	
	if(flag){
		puts("YES");
		for(int x : ans)
			printf("%d ",x);
		puts("");
	}
	else{
		puts("NO");
	}
    return 0;
}
