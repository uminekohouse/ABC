#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<ll>> cakes(3, vector<ll>(N, 0));
  rep(i, N) rep(j, 3) cin >> cakes[i][j];

  for (int bit = 0; bit < (1 << 3); ++i) {
    vector<vector<ll>> dp(N + 1, vectot<ll>(M + 1, -1 * 1LL << 60));
    for (int i = 0; i < N; ++i) {
