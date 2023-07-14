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
  int X, Y, Z;
  cin >> X >> Y >> Z;
  string S;
  cin >> S;
  int N = S.size();
  vvll dp(N + 1, vll(2, 1LL << 60));
  dp[0][0] = 0;
  for (int i = 0; i < N; ++i) {
    dp[i][1] = min(dp[i][1], dp[i][0] + Z);
    dp[i][0] = min(dp[i][0], dp[i][1] + Z);
    if (S[i] == 'a') {
      dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + X);
      dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + Y + Z);
      dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + Y);
      dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + Y + Z);
    }
    if (S[i] == 'A') {
      dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + Y);
      dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + X + Z);
      dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + X);
      dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + Y + Z);
    }
  }
  cout << min(dp[N][0], dp[N][1]) << endl;
}
