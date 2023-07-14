#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  for (ll D = 3; D <= 3 * N; ++D) {
    ll tmp = (D - 1) * (D - 2) / 2;
    if (K - tmp > 0)
      K -= tmp;
    else {
      for (ll A = 1; A <= min(N, D - 2); ++A) {
        tmp = D - A - 2;
        if (K - tmp > 0)
          K -= tmp;
        else {
          for (ll B = 1; B <= min(N, D - A - 1); ++B) {
            tmp = D - A - B;
            if (K - tmp > 0 || D - A - B > N)
              K -= tmp;
            else {
              cout << A << " " << B << " " << D - A - B << endl;
              return 0;
            }
          }
        }
      }
    }
  }
}
