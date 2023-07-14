#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); ++i)
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> indeg(N);
  vector<vector<int>> out(N);
  for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    a -= 1;
    b -= 1;
    indeg[b] += 1;
    out[a].push_back(b);
  }
  priority_queue<int, vector<int>, greater<int>> heap;
  for (int i = 0; i < N; ++i) {
    if (indeg[i] == 0) {
      heap.push(i);
    }
  }
  vector<int> ans;
  ans.reserve(N);
  while (!heap.empty()) {
    int i = heap.top();
    heap.pop();
    ans.push_back(i);
    int cnt = 0;
    for (int j : out[i]) {
      indeg[j] -= 1;
      if (indeg[j] == 0) {
        heap.push(j);
        cnt++;
      }
    }
    if (cnt != 1 && ans.size() != N) {
      cout << "No" << endl;
      return 0;
    }
  }
  if (size(ans) != N) {
    cout << -1 << '\n';
  } else {
    cout << "Yes" << endl;
    vector<int> res(N);
    for (int i = 0; i < N; ++i) {
      res[ans[i]] = i + 1;
    }
    rep(i, N) cout << res[i] << endl;
  }
}
