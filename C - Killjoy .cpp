
/**
 *    author        : Saurav-Paul 
 *    created       : September 20, 2020 9:36 AM
 *    Problem Name  : C - Killjoy
 *    Problem Limit : 1000 ms , 262 MB
 *    Problem Url   : https://codeforces.com/contest/1419/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int N , X ;

    vector<int> participant ;

    public :
    void solve(){

        cin >> N >> X ;

        int already_infected = 0 ;
        for(int i = 0 ; i < N ; i++){
            int x ; cin >> x;
            if(x == X) already_infected ++ ;
            participant.push_back(x) ;
        }
        // If all person is already infected then no need to having any contest
        // if 1 person is infected that means only one contest is needed because it is possible to make all other contestant
        // equal to x...
        int ans = -1 ;
        if(already_infected == N) ans = 0 ;
        else if(already_infected > 0) ans = 1;
        else{
            // if summation of all contestant - x == 0 ? that means in the first contest it is possible to make all
            // equal x then anwer will be 1 otherwise we can make only one contestant equal to x...
            // then we will need another contest to make all the contestant infected.

            ll sum = 0 ;
            for(int x : participant){
                sum += (X- x) ;
            }

            if(sum == 0){
                ans = 1 ;
            }
            else{
                ans = 2 ;
            }

        }
        cout << ans << endl ;

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
