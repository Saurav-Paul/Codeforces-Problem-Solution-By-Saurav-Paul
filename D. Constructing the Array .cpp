
/**
 *    author:  Saurav_Paul 
 *    created: 14.05.2020 21:10:15       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long int n ;
    cin>>n;
    vector<long long int > v(n+10) ;
    map<long long int, vector<pair<long long int, long long int>>> brdr;
    brdr[n].emplace_back(1, n);

    long long int cnt = 1 ;

    for(long long int i=n; i>=1; i--){

        long long int lt=brdr[i].size();
        sort(brdr[i].begin(), brdr[i].end());

        for(long long int j=0; j<lt; j++){
            long long int xt=(brdr[i][j].first+ brdr[i][j].second)/2;
            v[xt]=cnt++;
            long long int x=xt-brdr[i][j].first;
            if(x>0){
                 brdr[x].emplace_back(brdr[i][j].first, xt-1);
            }
            x=brdr[i][j].second-xt;
            if(x>0){
                brdr[x].emplace_back(xt+1, brdr[i][j].second);
            }
        }

    }

    int i =0 ;
    for(auto x : v){
        if(i > 0 && i <= n){
            cout << x << " ";
        }
        i++ ;
    }
    cout << endl ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }
	
    return 0;
}
