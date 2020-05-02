
/**
 *    author:  Saurav_Paul 
 *    created: 01.05.2020 20:55:04       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

        long long  n , k, i, j;
        cin>>n>>k;
        long long arr[n+4], cnt=0;
        map<long long, long long> mp;
        vector<long long> temp;
        for(i=0; i<n; i++){
            cin>>arr[i];
            if(mp[arr[i]]==0) cnt++, temp.emplace_back(arr[i]);
            mp[arr[i]]++;
        }
        if(cnt>k){
            cout<<-1<<endl;
            return ;
        }
        for(i=1; i<=k; i++){
            if(temp.size()==k) break;
            if(mp[i]==0) temp.emplace_back(i);
        }

        i=0;
        sort(temp.begin(), temp.end());
        long long limit=temp.size();
        vector<long long> b;
        while(1){
            if(i==n) break;
            for(j=0; j<limit; j++){
                b.emplace_back(temp[j]);
                if(arr[i]==temp[j]) i++;
                if(i==n) break;
            }
        }
        
        cout << b.size() << endl ;
        for(auto &x : b){
            cout << x << " ";
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
