#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n; cin>>n;
	string s; cin>>s;
	if(n==1){
		cout<<"Yes"<<endl;
		return 0;
	}
	int alphabet[29];
	memset(alphabet,0,sizeof(alphabet));
	for(int i=0; i< n; i++){
		alphabet[s[i]-'a']++;	
	}
	bool check=false ;
		
	for(int i=0; i< 29 ; i++){
		if(alphabet[i]>1){
			//that's mean array er man minimum 2
			check=true;
			break;
		}
		
	}	
	if(check)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
		
	
	return 0;
}
