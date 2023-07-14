#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = (n); i < (m); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using Graph = vector<vector<int>>;
int main() {
  int N;
  cin >> N;
  vvll dp(N + 1, vll(10, 0));
  REP(i, 10) dp[1][i] = 1;
  REP(i, N) {
    REP(j, 10) {
      if (j == 0)
        continue;
      FOR(k, -1, 2) {
        if (j + k < 1 || j + k > 9)
          continue;
        dp[i + 1][j] += dp[i][j + k];
        dp[i + 1][j] %= 998244353;
      }
    }
  }
  ll ans = 0;
  REP(i, 10) ans = (ans + dp[N][i]) % 998244353;
  cout << ans << endl;
}
