#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  Graph G(N);
  for (int i = 0; i < M; ++i) {
    int a;
    cin >> a;
    a--;
    G[a].push_back(a + 1);
    G[a + 1].push_back(a);
  }
  vector<int> seen(N, -1);
  function<void(int)> dfs = [&](int v) {
    for (auto nv : G[v]) {
      if (seen[nv] != -1)
        continue;
      seen[nv] = seen[v];
      dfs(nv);
    }
  };
  int cnt = 1;
  for (int i = 0; i < N; ++i) {
    if (seen[i] != -1)
      continue;
    seen[i] = cnt;
    cnt++;
    dfs(i);
  }
  map<int, vector<int>> mp;
  for (int i = 0; i < N; ++i) {
    mp[seen[i]].push_back(i);
  }
  for (auto v : mp) {
    vector<int> vec = v.second;
    reverse(all(vec));
    for (auto val : vec)
      cout << val + 1 << endl;
  }
}
