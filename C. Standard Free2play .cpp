				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
  int h, n;
  cin >> h >> n;
  vector<int> state(n);
  for(auto &x : state){
    cin >> x;
  }
  state.emplace_back(0) ;

  int last = 0;
  int crystal = 0;
  for (int i = 1; i <= n; i++)
  {
    if(state[i-1] - state[i] > 1){
      if(last){
        crystal += ( (i-last) & 1) ;
      }
      else{
        crystal += 1 - (i & 1);
      }
      last = i;
    }
  }
 

  cout << crystal << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int testcase;
  cin >> testcase;
  for (int t = 1; t <= testcase; t++)
  {
    solve();
  }

  return 0;
}
