#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> C(M);
  vector<vector<int>> a(M, vector<int>());
  for (int i = 0; i < M; ++i) {
    cin >> C[i];
    for (int j = 0; j < C[i]; ++j) {
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }
  int ans = 0;
  for (int bit = 0; bit < 1 << M; ++bit) {
    vector<bool> num(N + 1, false);
    for (int i = 0; i < M; ++i) {
      if (bit & (1 << i)) {
        for (auto val : a[i])
          num[val] = true;
      }
    }
    bool flag = true;
    for (int i = 1; i <= N; ++i)
      if (!num[i])
        flag = false;
    if (flag)
      ans++;
  }
  cout << ans << endl;
}
