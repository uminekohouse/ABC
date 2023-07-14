#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint1000000007;

int main() {
  int N;
  cin >> N;
  mint num = 1;
  rep(i, 100) num *= 10;
  vector<mint> A(N + 1);
  rep(i, N + 1) A[i] = num + i;
  vector<vector<set<mint>>> dp(N + 1, vector<set<mint>>(N + 2, set<mint>()));
  dp[0][1].insert(A[0]);
  rep(i, N + 1) {
    rep(j, N + 1) {
      for (auto val : dp[i][j]) {
        dp[i + 1][j + 1].insert(val);
        dp[i + 1][j + 1].insert(val + A[i]);
      }
    }
  }
}
