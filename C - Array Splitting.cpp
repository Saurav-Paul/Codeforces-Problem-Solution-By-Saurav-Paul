#include<bits/stdc++.h>
#define eb                    emplace_back
#define all(p)                p.begin(),p.end()
using namespace std;
 
int main()
{
	int n, k;
	scanf("%d%d",&n,&k);
	vector<int > v(n);
	
	for(int &x : v)
		scanf("%d",&x);
	
	vector< pair <int, int > > diff;
	for(int i= 1 ; i < n; i++)
		diff.eb(v[i]-v[i-1],i);
 
	sort(all(diff),greater< pair<int,int> >());
	
	bool part[n+10]={};
	part[n-1] = true;
 
	for(int i = 0 ; i < k-1 ; i++){
		part[diff[i].second-1]= true;
		
	}
	long long int sum = 0;
 
	for(int i = 0 , j = 0 ; j < n ; j++){
				
		if(part[j]){
			sum += v[j]-v[i];
			i = j+1;
		}
		
		
	}
	printf("%lld\n",sum);
	
    return 0;
}
