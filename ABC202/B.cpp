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
using pll = pair<ll, ll>;
using Graph = vector<vector<int>>;

int main() {
  int N1, N2, M;
  cin >> N1 >> N2 >> M;
  Graph G1(N1);
  Graph G2(N2);
  REP(_, M) {
    int a, b;
    cin >> a >> b;
    if (a <= N1 || b <= N1) {
      G1[a - 1].push_back(b - 1);
      G1[b - 1].push_back(a - 1);
    } else {
      G2[a - 1 - N1].push_back(b - 1 - N1);
      G2[b - 1 - N1].push_back(a - 1 - N1);
    }
  }
  vi dist1(N1, -1);
  queue<int> que1;
  dist1[0] = 0, que1.push(0);
  while (!que1.empty()) {
    int v = que1.front();
    que1.pop();
    for (auto nv : G1[v]) {
      if (dist1[nv] != -1)
        continue;
      dist1[nv] = dist1[v] + 1;
      que1.push(nv);
    }
  }
  int cnt1 = 0;
  for (auto v : dist1)
    cnt1 = max(cnt1, v);
  vi dist2(N2, -1);
  queue<int> que2;
  dist2[N2 - 1] = 0, que2.push(N2 - 1);
  while (!que2.empty()) {
    int v = que2.front();
    que2.pop();
    for (auto nv : G2[v]) {
      if (dist2[nv] != -1)
        continue;
      dist2[nv] = dist2[v] + 1;
      que2.push(nv);
    }
  }
  int cnt2 = 0;

  for (auto v : dist2)
    cnt2 = max(cnt2, v);
  cout << cnt1 + cnt2 + 1 << endl;
}
