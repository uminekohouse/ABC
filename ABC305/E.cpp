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

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  vvi G(N);
  REP(i, M) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].PB(b);
    G[b].PB(a);
  }
  vi P(N, -1);
  priority_queue<pair<int, int>> pq;
  REP(i, K) {
    int p, h;
    cin >> p >> h;
    --p;
    P[p] = h;
    pq.push({h, p});
  }
  while (pq.size()) {
    auto [h, p] = pq.top();
    pq.pop();
    if (P[p] != h)
      continue;
    for (auto np : G[p]) {
      if (P[np] < h - 1)
        pq.emplace(P[np] = h - 1, np);
    }
  }
  vi ans;
  REP(i, N) {
    if (P[i] >= 0)
      ans.PB(i + 1);
  }
  cout << ans.size() << endl;
  for (auto v : ans)
    cout << v << endl;
}
