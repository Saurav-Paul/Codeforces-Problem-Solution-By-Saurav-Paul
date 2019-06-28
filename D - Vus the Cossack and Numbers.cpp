				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <double > v;
	int sum = 0;
	int n;
	scanf("%d",&n);
	for(int i= 0 ; i < n; i++){
		double temp;
		scanf("%lf",&temp);
		sum += (int)floor(temp);
		v.emplace_back(temp);
	}
	for(int i = 0 ; i < n; i++){
		if(sum < 0 and (v[i]-floor(v[i]) > 0.00000000))
			printf("%d\n",(int)ceil(v[i])),sum+=1;
		else
			printf("%d\n",(int)floor(v[i]));
	}
    return 0;
}
