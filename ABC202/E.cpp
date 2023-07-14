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
  int N, M;
  cin >> N >> M;
  vi p(N, 0);
  FOR(i, 1, N) cin >> p[i];
  vvi G(N);
  FOR(i, 1, N)
  G[p[i] - 1].emplace_back(i);

  vi cnt(N, -1);
  REP(i, M) {
    int x, y;
    cin >> x >> y;
    x--;
    cnt[x] = max(cnt[x], y);
  }
  function<void(int)> dfs = [&](int v) {
    for (auto nv : G[v]) {
      if (cnt[v] > -1)
        cnt[nv] = max(cnt[v] - 1, cnt[nv]);
      dfs(nv);
    }
  };
  dfs(0);
  int ans = 0;
  for (auto val : cnt)
    if (val != -1)
      ans++;
  cout << ans << endl;
}
