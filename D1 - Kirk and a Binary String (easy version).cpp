#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	
	string s,t=""; cin >> s;
	int len = (int)s.size();
	int zero = 0 , one = 0;
	for(int i = len - 1; i >= 0 ; i--){
		if(s[i]=='0'){
			zero ++;
			t +='0';
		}
		else{
			if(zero == one){
				t += '0';
				zero ++;
			}
			else
				t += '1';
			one ++;
		}
	}
	
	reverse(t.begin(),t.end());
	cout << t << endl;
	
	return 0;
}
