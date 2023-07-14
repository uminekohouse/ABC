#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  vector<ll> sum(N + 1, 0);
  rep(i, N) sum[i + 1] = sum[i] + A[i];
  ll ans = 0;
  for (int k = 1; k <= N; ++k) {
    ll ans = 0;
    for (int i = k; i <= N; ++i)
      ans = max(ans, sum[i] - sum[i - k]);
    cout << ans << endl;
  }
}
