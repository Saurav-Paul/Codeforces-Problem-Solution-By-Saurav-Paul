/**
 *    author        : Saurav Paul 
 *    created       : March 07, 2021 9:30 AM
 *    Problem Name  : B - Finding Team Member
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;


class obj{
	public :
		int u ,v, cost;
	obj(int c ,int a , int b){
		v = a, cost = b;
		u = c;
	}
};

class Compare{
	public :
		bool operator () (obj &a , obj &b){
			return a.cost < b.cost ;
		}
};

class TC{

    public :

    void solve(){
        int team = 0 ;
        cin >> team ;
        vector< obj > teammate;
        priority_queue <obj , vector<obj> , Compare > pq;
        for(int i = 2 , limit = team * 2 ; i <= limit ; i++){
            for(int j = 1 ; j < i ; j++){
                int x ; cin >> x;
                pq.push(obj(i , j , x)) ;
            }
        }

        

        vector<int> ans(team*2+1 , -1) ;

        while(!pq.empty()){
            obj x = pq.top() ;
            pq.pop() ;

            if(ans[x.u] == -1 and ans[x.v] == -1){
                ans[x.v] = x.u ;
                ans[x.u] = x.v ;
            }
        }

        for(int i = 1; i <= team * 2 ; i++){
            cout << ans[i] << " ";
        }
        cout << endl ;

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
