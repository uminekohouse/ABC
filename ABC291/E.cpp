#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  Graph to(N);
  vector<int> deg(N);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    to[b].push_back(a);
    deg[a]++;
  }
  queue<int> que;
  vector<int> ans;
  rep(i, N) if (deg[i] == 0) que.push(i);
  while (que.size()) {
    if (que.size() > 1) {
      cout << "No" << endl;
      return 0;
    }
    int v = que.front();
    ans.push_back(v);
    que.pop();
    for (auto nv : to[v]) {
      deg[nv]--;
      if (deg[nv] == 0)
        que.push(nv);
    }
  }
  vector<int> A(N);
  cout << "Yes" << endl;
  for (int i = 0; i < N; ++i) {
    A[ans[i]] = N - i;
  }
  rep(i, N) cout << A[i] << endl;
}
