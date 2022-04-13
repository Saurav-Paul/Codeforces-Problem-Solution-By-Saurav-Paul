  
/**
 *    author        : Saurav Paul 
 *    created       : 12/04/2022 21:20:36
 *    Problem Name  : A. Array Balancing
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1661/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int n ; cin >> n;
		vector<ll> a(n), b(n) ;

		for(auto &x : a) cin >> x;
		for(auto &x : b) cin >> x;
		ll sum = 0 ;
		for(int i= 0 ; i < n - 1; i++){
			sum += min(abs(a[i]-a[i+1])+abs(b[i]-b[i+1]),abs(b[i]-a[i+1])+abs(a[i]-b[i+1])) ;
		}
		cout << sum << endl ;
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
