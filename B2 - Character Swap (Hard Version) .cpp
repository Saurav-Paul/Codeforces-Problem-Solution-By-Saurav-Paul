				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

bool not_possible(string &s, string &t){
  vector<int> v(30);
  for(auto x : s){
    v[x - 'a']++;
  }
  for(auto x : t){
    v[x - 'a']++;
  }
  for (auto x: v){
    if(x&1)
      return true;
  }
  return false;
}

void solve() {
  string s, t;
  int n;
  cin >> n;
  cin >> s >> t;
  if (not_possible(s, t))
  {
    cout << "No" << endl;
    return;
  }
  vector<pair<int, int>> swp;
  for (int i = 0; i < n; i++)
  {
    if(s[i] != t[i]){

      int x = -1, y = -1;
      for (int j = i + 1; j < n ; j++){
        if(s[j] == s[i]){
          x = j;
          break;
        }
        if(t[j] == s[i]){
          y = j;
        }
      }
      if(x != -1){
        swap(t[i], s[x]);
        swp.emplace_back(x, i);
      }
      else if( y != -1){
        swap(t[y], s[y]);
        swap(t[i], s[y]);
        swp.emplace_back(y,y) ;
        swp.emplace_back(y,i) ;
      }
      else
        assert(false);
    }
  }
  if(s != t)
    assert(false);
  cout << "Yes" << endl;
  cout << swp.size() << endl;
  for(auto x : swp){
    cout << x.first + 1 << " " << x.second + 1 << endl;
  }
}

int main() {

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
