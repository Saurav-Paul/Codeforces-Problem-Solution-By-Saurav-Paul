				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false) ;
	int n , k ;
	cin >> n >> k;
	string s;
	cin >> s;
	if(n==1 and k>0){
		
		cout << 0 << endl;
		return 0;
	}

	for(int i = 0 ; i < n and k ; i++){
		if(i==0){
			if(s[i]-'0' > 1)
			{
				s[i] = '1';
				k--;
			}
		}
		else{
			if(s[i] != '0'){
				s[i] = '0';
				k--;
			}
		}
	}
	cout << s << endl;
    return 0;
}
