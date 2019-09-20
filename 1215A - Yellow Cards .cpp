				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int a , b , k1 , k2 , n;

int find_mx(){
	int tn = n,mx = 0;
	mx = min(tn / k1 , a);
	tn -= k1*mx;
	mx += min(tn/k2,b); 
	return mx ;
}
	
int main()
{
	
	scanf("%d%d%d%d%d",&a,&b,&k1,&k2,&n);
	
	if(k1 > k2 )
		swap(a,b) , swap(k1,k2) ;
	
	int mx = find_mx();
	int have = a * (k1-1) + b * (k2-1);
	int mn = max(0,n-have);
	
	cout << mn << " " << mx << endl;

    return 0;
}
