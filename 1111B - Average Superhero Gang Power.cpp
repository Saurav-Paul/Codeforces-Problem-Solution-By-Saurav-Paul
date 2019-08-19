				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using ll = long long int ;
using namespace std;
using vec = vector<double> ;

void vecread(vec &v){
	for(auto &x : v)
		scanf("%lf",&x);
}

int main()
{
	double n , k , m;
	scanf("%lf%lf%lf",&n,&k,&m);
	vec power(n);
	vecread(power);
	
	double sum= 0 , av = 0;
	for(auto x : power)
		sum += x;
	
	sort(power.begin(),power.end());
	av = (sum+min(m,k*n))/n;
	
	int cnt = 1;
	for(int i = 0 ; i < min(n-1,m) ; i++,cnt++){
		sum -= power[i];
		av = max(av , (sum + min(m-cnt , k*(n-cnt)))/(n-cnt));		
	}
	
	printf("%.10lf\n",av);
	
    return 0;
}
