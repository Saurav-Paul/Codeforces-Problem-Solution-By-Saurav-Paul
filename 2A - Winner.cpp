#include<bits/stdc++.h>
using namespace std;
const int nax = 1005;
string name[nax];
int scr[nax];

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	map <string,int > m;
	set < string > winners ;
	int n;
	cin>>n;
	int maximum=0;
	for(int i=0; i< n; i++){
		cin>>name[i]>>scr[i];
		m[name[i]] += scr[i];
	}
	for(auto x : m){
		maximum = max(maximum,x.second);
	}
	
	
	for(auto x : m){
		if(x.second == maximum)
			winners.insert(x.first);
	}
	m.clear();
	
	for(int i=0; i< n; i++){
		m[name[i]] +=scr[i];
		if(winners.count(name[i]) && m[name[i]]>=maximum){
			cout << name[i] <<"\n";
			return 0;
		}
	}
	
	return 0;
}
