
/**
 *    author        : Saurav Paul 
 *    created       : December 14, 2020 8:54 AM
 *    Problem Name  : C - Soldier and Cards
 *    Problem Limit : 2000 ms , 262 MB
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    int n ;
    queue<int> F , S ;
    map<pair<queue<int>,queue<int>>,bool> rem ;
    int total_step = 0 ;

    public :
    void solve(){
        scanf("%d",&n) ;
        scan(F) ;
        scan(S) ;
        find_answer() ;

    }

    bool check_circle(){
        bool &value = rem[make_pair(F,S)] ;
        if(value == true) return true ;
        value = true ;
        return false ;
    }

    void find_answer() {
        total_step = 0 ;
        rem[make_pair(F,S)] = true ;

        while(!F.empty() && !S.empty()){
            int a = F.front() , b = S.front() ;

            F.pop() , S.pop() ;
            if(a < b){
                S.push(a) ;
                S.push(b) ;
            }
            else{
                F.push(b) ;
                F.push(a) ;
            }
            
            total_step ++ ;

            if(check_circle()){
                puts("-1") ;
                return ;
            }
        }

        int win = 1 ;
        if(F.empty()){
            win = 2 ;
        }
        printf("%d %d\n",total_step,win) ;

    }

    void scan(queue<int> &temp){
        int x ; scanf("%d" , &x) ;
        while(x--){
            int t ; scanf("%d" ,&t) ;
            temp.push(t) ;
        }
    }
};

int main(){

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
