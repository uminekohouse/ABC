#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<unordered_set<int>> S(N);
  int ans = N;
  rep(i, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      if (S[u].empty())
        ans--;
      if (S[v].empty())
        ans--;
      S[u].insert(v);
      S[v].insert(u);
    }
    if (c == 2) {
      int v;
      cin >> v;
      v--;
      if (S[v].size() != 0) {
        for (auto u : S[v]) {
          S[u].erase(v);
          if (S[u].size() == 0)
            ans++;
        }
        S[v].clear();
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
