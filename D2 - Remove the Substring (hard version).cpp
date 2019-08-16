#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	string s, t,rv;
	cin >> s >> t;
	rv = t;
	reverse(rv.begin(),rv.end());
	
	int slen = s.size();
	int tlen = t.size();
	
	vector<int> pref(tlen) ,suf(tlen);
	int k = 0;
	// finding prefix...
	
	for(int i = 0 ; i < slen ; i++){
		if(s[i] == t[k]){
			pref[k] = i;
			k ++;
		}
		if(k == tlen)
			break ;
	}
	// finding suffix .....
	k = tlen - 1;
	for(int i = slen -1 ; i >= 0 ; i--){
		if(s[i]==t[k]){
			suf[k] = i;
			k --;
		}
		if(k < 0)
			break ;
	}
	
	int mx = max( suf[0] ,slen - 1 -pref[tlen-1] ) ;
	
	
	
	// finding maximum ....
	
	for(int i = 0 ; i < tlen - 1; i++){
		mx = max(mx,suf[i+1]-pref[i]-1);
	}
	
	
	
	cout << mx << endl;
}
