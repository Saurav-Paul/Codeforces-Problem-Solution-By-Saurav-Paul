#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	string s;
	cin>>n>>s;
	string change[]={"","","2","3","322","5","53","7","7222","7332"};
	string ans="";
	for(auto x : s){
		int temp = (int ) (x-'0') ;
		ans+=change[temp] ;
	}
	sort(ans.begin(),ans.end(),greater<>());
	cout << ans << endl;
	return 0;
}
