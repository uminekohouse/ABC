#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll MOD = 998244353;

int main() {
  ll N, M;
  cin >> N >> M;
  vector<vector<ll>> dp(N, vector<ll>(2, 0));
  dp[0][0] = 0;
  dp[0][1] = 1;
  for (ll i = 1; i < N; ++i) {
    dp[i][0] = dp[i - 1][1] * ((M - 1) % MOD);
    dp[i][1] = dp[i - 1][0] + dp[i - 1][1] * ((M - 2) % MOD);
    dp[i][0] %= MOD;
    dp[i][1] %= MOD;
  }
  ll ans = dp[N - 1][0] * (M % MOD);
  cout << ans % MOD << endl;
}
