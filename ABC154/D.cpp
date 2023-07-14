#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, K;
  cin >> N >> K;
  vector<double> p(N);
  rep(i, N) {
    cin >> p[i];
    p[i] = (1.0 + p[i]) / 2.0;
  }
  vector<double> sum(N, 0);
  rep(i, K) sum[0] += p[i];
  for (int i = 0; i + K < N; ++i) {
    sum[i + 1] = sum[i] + p[i + K] - p[i];
  }
  double ans = 0.0;
  rep(i, N) ans = max(ans, sum[i]);
  printf("%.10f\n", ans);
}
