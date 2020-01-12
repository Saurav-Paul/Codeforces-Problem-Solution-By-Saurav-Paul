				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int r, c;
	cin >> r >> c;

	if(r==1 && c==1)
		cout << 0 << endl;
	else if(r==1 or c==1){
		int mx = max(r, c);
		for (int i = 2; i <= mx+1;i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	else{
		for (long long int x = 1; x <= r; x++)
		{
			for(long long int y =1 ; y <= c; y++ ){
				cout << (y + r) * x << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
