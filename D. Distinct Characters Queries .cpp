				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  set<int> alpha[30];
  for (int i = 0; i < s.size(); i ++){
    int x = s[i] - 'a';
    alpha[x].insert(i+1);
  }

  auto cal = [&](int a, int b, int i) {
    if(alpha[i].size() == 0)
      return 0;
    auto x = alpha[i].lower_bound(a);
    int p = *x;
    if(p >= a && p <= b)
      return 1;
    return 0;
  };
  int q;
  cin >> q;
  while(q--){
    int op;
    cin >> op;
    if(op==1){
      int pos;
      char c;
      cin >> pos >> c;
      int x = s[pos - 1] - 'a';
      alpha[x].erase(pos);
      s[pos - 1] = c;
      alpha[(c - 'a')].insert(pos);
    }
    else{
      int a, b;
      cin >> a >> b;
      int cnt = 0;
      for (int i = 0; i < 30; i++){
        cnt += cal(a,b,i);
      }
      cout << cnt << endl;
    }
  }

  return 0;
}
