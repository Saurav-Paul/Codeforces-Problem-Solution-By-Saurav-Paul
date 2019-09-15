				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; scanf("%d",&n);
	
	vector<int> v(n), have;
	for(int &x : v)
		scanf("%d",&x);
		
	sort(v.begin(),v.end() );
	
	for(int i = 0 ; i < n ;i++){
		bool ok = true ;
		for(auto x : have) 
			if(v[i]%x == 0 ){
				ok = false ;
				break ;
			}
		if(ok)
			have.emplace_back(v[i]);
	}
		
	printf("%d\n",(int)have.size() );

    return 0;
}
