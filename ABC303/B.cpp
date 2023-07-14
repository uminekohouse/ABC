#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<bool>> ok(N, vector<bool>(N, false));
  rep(_, M) {
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    rep(i, N) A[i]--;
    rep(i, N - 1) {
      ok[A[i]][A[i + 1]] = true;
      ok[A[i + 1]][A[i]] = true;
    }
  }
  int cnt = 0;
  for (int i = 0; i < N - 1; ++i)
    for (int j = i + 1; j < N; ++j)
      if (!ok[i][j])
        cnt++;
  cout << cnt << endl;
}
