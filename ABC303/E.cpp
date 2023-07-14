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
  int N;
  cin >> N;
  vvi G(N);
  REP(i, N - 1) {
    int u, v;
    cin >> u >> v;
    --u;
    --v;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }
  int start = 0;
  REP(i, N) {
    if (G[i].size() == 1) {
      start = i;
      break;
    }
  }

  vi dist(N, -1);
  queue<int> que;
  que.push(start);
  dist[start] = 0;
  while (que.size()) {
    int v = que.front();
    que.pop();
    for (auto nv : G[v]) {
      if (dist[nv] != -1)
        continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  map<int, int> mp;
  REP(i, N) {
    if ((dist[i] - 1) % 3 == 0) {
      mp[G[i].size()] += 1;
    }
  }
  for (auto v : mp) {
    int key = v.first, cnt = v.second;
    REP(i, cnt) cout << key << endl;
  }
}
