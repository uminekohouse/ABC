#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> seen(N + 1, 0);
  stack<int> prev;

  function<void(int)> dfs = [&](int v) {
    seen[v] = 1;
    if (seen[N] == 1) {
      string S;
      cin >> S;
      exit(0);
    }
    prev.push(v);
    int k;
    cin >> k;
    vector<int> vec(k);
    rep(i, k) cin >> vec[i];
    for (auto nv : vec) {
      if (seen[nv])
        continue;
      cout << nv << "\n";
      dfs(nv);
    }
    prev.pop();
    dfs(prev.top());
  };
  dfs(1);
  return 0;
}
