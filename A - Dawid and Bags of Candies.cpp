				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v(4);
	int total = 0;
	for(int i = 0 ; i <  4; i ++){
		cin >> v[i] ;
		total += v[i];
	}
	sort(v.begin() , v.end() );
	bool ok = false;
	if(total%2==0){
		total /= 2;
		if(v[0] + v[1] == total or v[0] + v[2] == total 
			or v[1] + v[2] == total or v[0] + v[1] + v[2] == total )
				ok = true;
		
	}
	puts(ok? "YES" : "NO");

    return 0;
}
