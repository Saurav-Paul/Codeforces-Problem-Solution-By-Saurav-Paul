				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

vector< pair<int,int> > v = { {0,6}, {1,2} , {2,5} , {3,5} , {4,4} , {5,5}, {6,6} , {7,3} , {8,7} , {9, 6} } ;
void solve() {

  int n ; cin >> n;
  string s = "" ;
  while(n != 0){
    for(auto x : v){
      int cnt = n - x.second ;
      if(cnt == 0 || cnt > 1){
        n = cnt ;
        s += ('0'+x.first) ;
        break ;
      }
    }
  }
  sort(s.begin(),s.end(), greater<char>()) ;
  cout << s << endl ;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sort(v.begin(),v.end(), [&]( pair<int,int> a , pair<int,int> b){
      if(a.second == b.second) 
        return (a.first > b.first) ;
      return (a.second < b.second) ;
    }) ; 

    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
      solve();
    }

    return 0;
}
