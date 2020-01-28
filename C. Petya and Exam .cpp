				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

template<typename... T>
void read(T&...args){
  ((cin >> args), ...);
}


void solve() {
  int n, T, a, b;
  read(n, T, a, b);
  vector< pair<int,int > > prob(n);
  long long  easy = 0 , hard = 0;
  for (auto &x : prob)
  {
    cin >> x.first;
    if(x.first)
      hard++;
    else
      easy++;
  }
  for(auto &x : prob){
    cin >> x.second;
  }

  sort(prob.begin(), prob.end(), [&](pair<int, int> &t, pair<int, int> &p) {
    return (t.second < p.second);
  });
  long long  ce = 0, ch = 0;
  prob.emplace_back(-1, T);
  
  long long  total = 0 , mx = 0 ;

  {
    long long  ex = prob[0].second - 1;
    if(ex > 0){
      long long  c1 = min(ex / a, easy);
      ex -= (c1 * a);
      long long  c2 = min(ex / b, hard);
      mx = c1 + c2;
    }
  }

  for (int i = 0; i < n; i++){
    if(i==n){

      break;
    }
    long long  f = prob[i].first , s = prob[i].second;
    if(f==0){
      ce++;
      total += a;
    }
    else if(f==1){
      ch++;
      total += b;
    }
    else
      assert(false);

    long long  need = a * ce + b * ch;

    if(i==n-1){
      if(need <= T){
        long long  extra = T - need;
        long long  cnt = min(extra / a, (easy - ce));
        extra -= (cnt * a);
        long long  cnt2 = min(extra / b, (hard - ch));
        mx = max(mx, (cnt + cnt2 + ce + ch));
      }
      
    }
    else if ((need < prob[i + 1].second))
    {
      long long  extra = prob[i + 1].second - 1 - need;
      long long  cnt = min(extra / a, (easy - ce));
      extra -= (cnt * a);
      long long  cnt2 = min(extra / b, (hard - ch));
      mx = max(mx, (cnt + cnt2 + ce + ch));
    }
  }
  cout << mx << endl;
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
