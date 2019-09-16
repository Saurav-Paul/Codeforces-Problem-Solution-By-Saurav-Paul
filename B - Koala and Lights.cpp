				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	
	string state; cin >> state;
	const int nax = 1e3;
	vector< vector<int> > time_q(nax, vector<int> () );
	
	for(int i = 0 ; i < n; i++){
		int a , b; scanf("%d%d",&a,&b);
		for(int j = b ; j < 1000 ; j += a){
			time_q[j].emplace_back(i);
		}
	}
	int mx = 0;
	
	for(int i = 0 ; i < 1000 ; i ++ ){
		for(auto x : time_q[i] ){
			state[x] = (state[x]=='1'?'0':'1');
		}
		int cnt = 0;
		for(auto x : state)
			if(x=='1')	cnt ++;
		mx = max(mx,cnt);
	}	
	
	cout << mx << endl;
    return 0;
}
