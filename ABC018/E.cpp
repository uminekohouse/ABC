#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

ll comb(ll N) { return (N - 1) * (N - 2) / 2; }

int main() {
  ll N, K;
  cin >> N >> K;
  ll sum = 0;
  ll D = 0;
  for (ll i = 3; i <= 3 * N; ++i) {
    if (D + comb(i) >= K) {
      D = i;
      break;
    } else
      sum += comb(i);
  }
  int E = 0;
  for (int A = 1; A <= D - 2; ++A) {
    if (sum + (D - A - 1) > K) {
      E = A;
      break;
    } else
      sum += D - A - 1;
  }
  cout << E << endl;
}
