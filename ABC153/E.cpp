#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int H, N;
  cin >> H >> N;
  int A[N], B[N];
  rep(i, N) cin >> A[i] >> B[i];

  int INF = 1 << 30;
  vector<vector<int>> dp(N + 1, vector<int>(H + 1, INF));
  dp[0][H] = 0;
  rep(i, N) {
    for (int j = H; j >= 0; --j) {
      if (dp[i][j] == INF)
        continue;
      // 使わない
      dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
      // 使う
      dp[i][max(0, j - A[i])] = min(dp[i][max(0, j - A[i])], dp[i][j] + B[i]);
    }
  }
  cout << dp[N][0] << endl;
}
