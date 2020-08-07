
/**
 *    author        : Saurav Paul 
 *    created       : August 07, 2020 9:03 PM
 *    Problem Name  : B. Applejack and Storages
 *    Problem Limit : 2000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1393/problem/b
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    int n ;
    cin >> n;
    vector<int> v(n) ;
    map<int,int> cnt ;

    for(auto &x : v){
        cin >> x;
        cnt[x] ++ ;
    }
    int four = 0 , two = 0 ;
    for(auto x : cnt){
        four += (x.second/4) ;
        two += (x.second/2) ;
    }

    int q ;
    cin >> q;
    for(int i = 0 ; i < q ; i++){
        char c ;
        int num ;
        cin >> c >> num ;
        if(c == '+'){
            int curr = cnt[num] ;
            four -= (curr/4) ;
            two -= (curr/2) ;
            curr ++ ;
            cnt[num] = curr ;
            four += (curr/4) ;
            two += (curr/2)  ;
        }
        else{
            int curr = cnt[num] ;
            four -= (curr/4) ;
            two -= (curr/2) ;
            curr -- ;
            cnt[num] = curr ;
            four += (curr/4) ;
            two += (curr/2)  ;

        }

        // checking

        bool ok = true ;
        if(four < 1) ok = false ;
        int ct = two -  2 ;
        if(ct < 2) ok = false ;

        cout << (ok?"YES":"NO") << endl ;
    }


    return 0 ;
}
