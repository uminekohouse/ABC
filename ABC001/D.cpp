#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

void solve() {
  ll N, D, K;
  cin >> N >> D >> K;
  ll tmp = gcd(N, D);
  if (tmp == 1) {
    cout << (D * K) % N << endl;
  } else {
    ll num = N / tmp;
    cout << (((N + num - 1) / num) + (D * K) % N) % N << endl;
  }
}

int main() {
  int T;
  cin >> T;
  rep(_, T) solve();
  return 0;
}
