#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void solve() {
  int N, M;
  cin >> N >> M;
  vector<int> C(N);
  rep(i, N) cin >> C[i];
  Graph G(N);
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  vector<vector<int>> seen(N, vector<int>(N, -1));
  queue<P> que;
  que.push({0, N - 1});
  seen[0][N - 1] = 0;
  while (que.size()) {
    int v = que.front().first;
    int u = que.front().second;
    que.pop();
    for (auto nv : G[v]) {
      for (auto nu : G[u]) {
        if (seen[nv][nu] != -1)
          continue;
        if (C[nv] == C[nu])
          continue;
        seen[nv][nu] = seen[v][u] + 1;
        que.push({nv, nu});
      }
    }
  }
  cout << seen[N - 1][0] << endl;
}

int main() {
  int T;
  cin >> T;
  rep(_, T) solve();
  return 0;
}
