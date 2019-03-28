#include<iostream>
using namespace std;
int main(){
	long long int n,l,a,prev=0;
	cin>>n>>l>>a; 
	long long ans=0,c,b;
	while(n--){
		cin>>c>>b;
		ans+=(c-prev)/a;
		prev=c+b;
	}
	cout<<ans+(l-prev)/a<<endl;
	return 0;
}
