				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;

  vector<vector<int>> way(4, vector<int>(n + 2));
  int cnt = 0;

  auto flip = [&](int r, int c) {
    int nxt = (r == 1 ? 2 : 1);
    int x = 0;
    if(way[nxt][c])
      x++;
    if(way[nxt][c-1])
      x++;
    if(way[nxt][c+1])
      x++;
    if (way[r][c])
    {
      way[r][c] = 0;
      cnt += x;
    }
    else{
      way[r][c] = 1;
      cnt -= x;
    }

  };

  for (int i = 0; i < q; i++)
  {
    int r, c;
    cin >> r >> c;
    flip(r, c);
    cout << (cnt ? "No" : "Yes") << endl;
  }

    return 0;
}
