
/**
 *    author        : Saurav Paul 
 *    created       : September 13, 2022 11:12 PM
 *    Problem Name  : A. Two Elevators
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1729/problem/A
 *    @generated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int solve(){
		int a, b, c;
		cin >> a >> b >> c ;

		int ta = abs(a - 1);
		int tb = abs(b - c) + abs(c - 1);

		if(ta == tb) return 3;
		if(ta < tb) return 1;
		return 2;
	}
};

int main(){
    ios_base::sync_with_stdio(false);

	int t; cin >> t;

	while(t--){
		Solution obj;
		int ans = obj.solve() ;
		cout << ans << endl;
	}

    return 0 ;
}