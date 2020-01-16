//https://codeforces.com/problemset/problem/1253/B
				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> pos;
  set<int> st, rem;
  bool ok = true;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if(x > 0){
      ok = false;
      if(rem.count(x)){
        break;
      }
      st.insert(x);
      rem.insert(x);
    }
    else{
      if(st.count((x*-1))){
        st.erase((x * -1));
        if(st.size() == 0){
          ok = true;
          rem.clear();
          pos.emplace_back(i + 1);
        }
      }
      else{
        ok = false;
        break;
      }
    }
  }
  if(!ok)
    cout << -1 << endl;
  else{
    int rx = 0;
    cout << pos.size() << endl;
    for(auto x : pos)
      cout <<x-rx << " ",rx = x;
    cout << endl;
  }
  return 0;
}
