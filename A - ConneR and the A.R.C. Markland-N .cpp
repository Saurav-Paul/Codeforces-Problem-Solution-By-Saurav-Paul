				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {
  int n, s, k;
  cin >> n >> s >> k;
  set<int> rem;
  while(k--){
    int x;
    cin >> x;
    rem.insert(x);
  }
  auto fun = [&](int x) {
    if(x < 1 || x > n)
      return false;
    return (rem.count(x) ? false : true);
  };
  for (int i = s, j = s, cnt = 0;; i++, j--, cnt++)
  {
    if(fun(i) || fun(j)){
      cout << cnt << endl;
      break;
    }
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  int testcase;
  cin >> testcase;
  for (int t = 1; t <= testcase; t++)
  {
    solve();
  }

  return 0;
}
