#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, D, A;
  cin >> N >> D >> A;
  vector<int> X(N), H(N);
  rep(i, N) cin >> X[i] >> H[i];
  vector<pair<int, int>> vec;
  rep(i, N) vec.push_back({X[i], H[i]});
  sort(vec.begin(), vec.end());
  int l = vec[0].first, r = vec[N - 1].first;
}
