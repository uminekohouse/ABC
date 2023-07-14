#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int D;

struct Pos {
  int x;
  int y;
};

bool is_distance(Pos s, Pos t) {
  int dx = s.x - t.x;
  int dy = s.y - t.y;
  return dx * dx + dy * dy <= D * D;
}

int main() {
  int N;
  cin >> N >> D;
  vector<Pos> vec_pos(N);
  Graph G(N);
  rep(i, N) cin >> vec_pos[i].x >> vec_pos[i].y;
  rep(i, N) {
    rep(j, N) {
      if (i == j)
        continue;
      if (is_distance(vec_pos[i], vec_pos[j])) {
        G[i].push_back(j);
        G[j].push_back(i);
      }
    }
  }

  vector<bool> seen(N);

  function<void(int)> dfs = [&](int v) {
    seen[v] = true;
    for (auto nv : G[v]) {
      if (seen[nv])
        continue;
      dfs(nv);
    }
  };

  dfs(0);

  for (auto val : seen) {
    if (val)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}
