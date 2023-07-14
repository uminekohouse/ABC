#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> H(N);
  rep(i, N) cin >> H[i];
  sort(H.rbegin(), H.rend());
  ll ans = 0;
  for (ll i = K; i < N; ++i) {
    ans += H[i];
  }
  cout << ans << endl;
}
