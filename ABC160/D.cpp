#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int X, Y;
  cin >> X >> Y;
  map<int, int> mp;
  for (int i = 1; i < N; ++i) {
    for (int j = i + 1; j <= N; ++j) {
      int dist;
      if (i <= X && Y <= j)
        dist = X - i + 1 + j - Y;
      else if (X < i && Y <= j)
        dist = min(j - Y + 1 + i - X, j - i);
      else if (i <= X && j < Y)
        dist = min(X - i + 1 + Y - j, j - i);
      else if (X < i && j < Y)
        dist = min(i - X + 1 + Y - j, j - i);
      mp[dist]++;
    }
  }
  for (int i = 1; i < N; ++i)
    cout << mp[i] << endl;
}
