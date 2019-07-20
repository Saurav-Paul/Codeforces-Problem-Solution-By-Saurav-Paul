#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
using namespace std;
int n;

void find_ans(string &v){
	
	n = (int)v.size();
	
	vector <ll > pref(n),suff(n);
	
	long long int cnt = 0;
	for(int i = 1 ; i < n; i++){
		suff[i] = suff[i-1];
		if(v[i]=='v' and v[i-1]=='v')
			suff[i] += 1;
			
	}
	for(int i = n-2 ; i >=0 ; i--){
		pref[i] = pref[i+1];
		if(v[i]=='v' and v[i+1]=='v')
			pref[i] ++ ;
	}
	for(int i = 1 ; i < n ; i++){
		if(v[i]=='o' and suff[i] and pref[i]){
			cnt += (suff[i] * pref[i]);
		}
	}
	cout << cnt << endl;
}

int main()
{
	boost ;
	
	string s; cin >> s;
	find_ans(s);
	
    return 0;
}
