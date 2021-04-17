
/**
 *    author        : Saurav Paul 
 *    created       : March 16, 2021 11:50 PM
 *    Problem Name  : E - Cutting Out
 *    Problem Limit : 3000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

bool compare(const pair<int,int> &a , const pair<int,int> &b){
    return a.second > b.second ;
}

class TC{

    int n , k ;
    vector<pair<int,int>> v ;
    vector<int> t ;
    public :
    void solve(){
        
        cin >> n >> k ;
        map<int,int> rem ;
        for(int i = 0 ; i< n; i++){
            int x ; cin >> x;
            rem[x] ++ ;
        }
        
        for(auto x : rem){
            v.push_back(make_pair(x.first , x.second)) ;
        }
        sort(v.begin() , v.end() , compare) ;
        
        int low = 0 , high = 2e5 + 10 , ans = 0 ;

        while(low <= high){
            int mid = (low + high) / 2 ;
            if(possible(mid)){
                ans = mid ;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        for(auto x : t){
            cout << x << " " ;
        }
        cout << endl ;

    }

    bool possible(int target){
        if (target == 0) return true ;
        int cnt = 0 ;
        vector<int> temp ;
        for (auto x : v){
            int no = x.second ;
            int p = no / target ;
            if( p == 0) 
                break ;
            
            for(int i = 0 ; i < p ;i ++){
                temp.push_back(x.first) ;
                cnt ++ ;
                if(cnt == k) {
                    goto done ;
                }
            }
        }
        done :
        if(cnt == k) {
            t = temp ;
            return true ;
        }
        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
