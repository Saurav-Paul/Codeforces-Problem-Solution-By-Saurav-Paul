
/**
 *    author:  Saurav_Paul 
 *    created: 06.05.2020 21:42:38       
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

        long  long n, j, k;
        cin>>n;
        
        vector<long long > arr(n) ;
        for(auto &x : arr){
            cin >> x ;
        }
        vector<long long > temp;
        
        for(int i=0; i<n; i++){
            long long  x=i%n;
            x=i+arr[x];
            temp.emplace_back(x);
        }
        bool check[n+5]={};


        for(int i=0; i<n; i++){
            if(temp[i]>=0){
                long long  x=temp[i]%n;
                check[x]=true;
                continue;
            }


            temp[i]=abs(temp[i]);
            long long  x=temp[i]/n;
            if(temp[i]%n!=0) x++;
            long long  y=(x*n)-temp[i];
            check[y]=true;
        }
        
        bool flag=false;
        for(int i=0; i<n; i++){
            if(check[i]==false)
                flag=true;
        }

        cout << (flag?"NO":"YES") << endl ;
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
