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
  vvi dish(N, vi(2));
  REP(i, N) cin >> dish[i][0] >> dish[i][1];
  vvll dp(N + 1, vll(2, -1LL << 60));
  dp[0][0] = 0;
  dp[0][1] = 0;
  REP(i, N) {
    int X = dish[i][0];
    int Y = dish[i][1];
    if (X == 0) {
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + Y);
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][1] + Y);
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
      dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
    }
    if (X == 1) {
      dp[i + 1][1] = max(dp[i + 1][1], dp[i][0] + Y);
      dp[i + 1][1] = max(dp[i + 1][1], dp[i][1]);
      dp[i + 1][0] = max(dp[i + 1][0], dp[i][0]);
    }
  }
  cout << max(dp[N][0], dp[N][1]) << endl;
}
