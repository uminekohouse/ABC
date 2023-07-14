#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  Graph to(N + M);
  rep(i, N) {
    int A;
    cin >> A;
    rep(j, A) {
      int S;
      cin >> S;
      S--;
      to[i].push_back(S + N);
      to[S + N].push_back(i);
    }
  }
  vector<int> dist(N + M, -1);
  queue<int> que;

  dist[N] = 0;
  que.push(N);

  while (!que.empty()) {
    int v = que.front();
    que.pop();

    for (int nv : to[v]) {
      if (dist[nv] != -1)
        continue;
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }

  if (dist[N + M - 1] == -1)
    cout << -1 << endl;
  else
    cout << (dist[N + M - 1] - 2) / 2 << endl;
  return 0;
}
