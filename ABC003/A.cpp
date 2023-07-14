#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  double N;
  cin >> N;
  double ans = 0.0;
  for (double i = 1.0; i <= N; i += 1.0)
    ans += 10000.0 * i / N;
  cout << ans << endl;
}
