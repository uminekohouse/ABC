#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll N, M;
  cin >> N >> M;
  ll ans = 1LL << 60;
  for (ll a = 1; a <= N; ++a) {
    ll l = a - 1, r = N;
    while (r - l > 1) {
      ll mid = l + (r - l) / 2;
      if (a * mid >= M)
        r = mid;
      else
        l = mid;
    }
    if (a * r >= M) {
      ans = min(ans, a * r);
      break;
    }
  }
  if (ans != 1LL << 60)
    cout << ans << endl;
  else
    cout << -1 << endl;
}
