#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; ++t) {
    int N, M;
    cin >> N >> M;
    vector<int> C(N);
    rep(i, N) cin >> C[i];
    Graph G(N);
    for (int i = 0; i < M; ++i) {
      int u, v;
      cin >> u >> v;
      --u;
      --v;
      G[u].push_back(v);
      G[v].push_back(u);
    }
    auto check = [&](vector<int> vec) {
      vector<int> tmp = vec;
      reverse(all(vec));
      int cnt = 0;
      for (int i = 0; i < vec.size(); ++i)
        if (tmp[i] != vec[i])
          cnt++;
      if (cnt == vec.size())
        return true;
      else
        return false;
    };

    bool flag = false;
    int ans = 10000000;
    function<void(int, vector<int>, vector<int>)> func =
        [&](int v, vector<int> dist, vector<int> prev) {
          prev.push_back(v);
          if (v == N - 1) {
            if (dist[N - 1] % 2 == 1) {
              if (check(prev)) {
                for (auto val : prev)
                  cout << val << " ";
                ans = min(ans, dist[N - 1]);
                flag = true;
                return;
              } else
                return;
            } else
              return;
          }
          for (auto nv : G[v]) {
            if (dist[nv] != -1)
              continue;
            dist[nv] = dist[v] + 1;
            func(nv, dist, prev);
          }
        };
    vector<int> dist(N, -1);
    dist[0] = 0;
    vector<int> prev;
    func(0, dist, prev);
    if (!flag)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
}
