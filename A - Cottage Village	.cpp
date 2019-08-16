#include<bits/stdc++.h>
using namespace std;
using pii = pair<double,double> ;
double gt = .00000001;
int main(){
	
	double n, t;
	scanf("%lf%lf",&n,&t);
	vector<pii > v;
	
	for(int i = 0 ; i < n; i++){
		double a, b;
		scanf("%lf%lf",&a,&b);
		v.emplace_back(a,b);
	}
	sort(v.begin(),v.end());
 
	
	int ans = 2;
	for (int i = 0 ; i < n-1 ; i++){
		
		double temp = abs((v[i+1].first - v[i+1].second/2) - (v[i].first + v[i].second/2));
		//~ cerr << temp << endl;
		if(temp < t)
			continue ;
		if(temp > t)
			ans += 2;
		if(temp-t== 0.0)
			ans ++;
	}
	
	printf("%d\n",ans);
	return 0;
}
