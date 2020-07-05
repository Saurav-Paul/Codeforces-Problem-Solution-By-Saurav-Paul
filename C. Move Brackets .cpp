
/**
 *    author        : Saurav Paul 
 *    created       : July 05, 2020 8:54 PM
 *    Problem Name  : C. Move Brackets
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1374/problem/C
**/

#include<bits/stdc++.h>
using namespace std;

/*
 Idea : Here we just need to count number of occurence of ')' before '(' and that will be out answer.
 Why ? Because it's just those occurence are wrong and we just need to move then in end of the line.
*/

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0 ;
    int cnt = 0 ;
    for(int i = 0; i < n; i++){
        if(s[i]=='('){
            ++ a;
        }
        else {
            if(a){
                -- a;
            }
            else{
                ++ cnt ;
            }
        }

    }
    cout << cnt << endl ;

}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
