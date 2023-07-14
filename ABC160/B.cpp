#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {

  int X;
  cin >> X;
  int res = 0;
  res += (X / 500) * 1000;
  res += (X % 500) / 5 * 5;
  cout << res << endl;
}
