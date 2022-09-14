  
/**
 *    author        : Saurav Paul 
 *    created       : September 14, 2022 9:33 PM
 *    Problem Name  : D. Friends and the Restaurant
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1729/problem/D
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
		int n ; cin >> n ;
		vector<int> x(n), y(n);
		for(auto &_x: x) cin >> _x;
		for(auto &_x: y) cin >> _x;

		vector<int> v;

		for(int i = 0 ; i< n; i++){
			v.push_back(y[i] - x[i]) ;
		}

		sort(v.begin() , v.end()) ;

		int cnt = 0 ;

		int st = 0 , en = n - 1;
		while(st < en){
			if(v[st] + v[en] >= 0){
				++ cnt ;
				en--;
			}
			st ++;
		}

		cout << cnt << endl;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
