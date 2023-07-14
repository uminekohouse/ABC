#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  double m;
  cin >> m;
  m /= 1000;
  int ans;

  if (m < 0.1)
    ans = 0;
  if (0.1 <= m && m <= 5.0)
    ans = m * 10;
  if (6.0 <= m && m <= 30.0)
    ans = m + 50;
  if (35.0 <= m && m <= 70.0)
    ans = (m - 30) / 5 + 80;
  if (m > 70.0)
    ans = 89;
  printf("%02d\n", ans);
}
