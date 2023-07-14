#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void solve() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int M;
  cin >> M;
  set<int> B;
  rep(i, M) {
    int tmp;
    cin >> tmp;
    B.insert(tmp);
  }
  int X;
  cin >> X;
  vector<int> stairs(X + 1);
  stairs[0] = 1;
  for (int i = 0; i <= X; ++i) {
    int v = i;
    if (!stairs[i])
      continue;
    for (auto dv : A) {
      int nv = v + dv;
      if (nv > X)
        continue;
      if (B.count(nv))
        continue;
      stairs[nv] = 1;
    }
  }
  if (stairs[X])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main() {
  solve();
  return 0;
}
