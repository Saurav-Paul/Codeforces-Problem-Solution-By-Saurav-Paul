				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define boost		          ios_base::sync_with_stdio(0);
using namespace std;

int main()
{
	boost;
	int n; cin >> n;
	string s; cin >>s;
	int ones= 0, zeros = 0;
	for(int i = 0 ; i < n ; i++){
		if(s[i]=='1')
			ones++;
		else
			zeros++;
	}
	if(ones != zeros){
		cout << 1 << endl << s << endl;
		return 0;
	}

	cout << 2 << endl;
	cout <<s[0]<<" ";
	for(int i = 1 ; i <n ; i++)
		cout<<s[i];
	cout << endl;
    return 0;
}
