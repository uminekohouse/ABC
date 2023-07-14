#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, T;
  cin >> N >> T;
  vector<int> C(N), R(N);
  rep(i, N) cin >> C[i];
  rep(i, N) cin >> R[i];
  int cnt = -1;
  int ans = -1;
  rep(i, N) {
    if (C[i] == T) {
      if (cnt < R[i]) {
        cnt = max(cnt, R[i]);
        ans = i + 1;
      }
    }
  }
  if (ans != -1) {
    cout << ans << endl;
    return 0;
  }
  rep(i, N) {
    if (C[i] == C[0]) {
      if (cnt < R[i]) {
        cnt = max(cnt, R[i]);
        ans = i + 1;
      }
    }
  }
  cout << ans << endl;
}
