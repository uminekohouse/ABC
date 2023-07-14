#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> vec(200, 0);
  rep(_, N) {
    int A;
    cin >> A;
    vec[A % 200]++;
  }
  ll ans = 0;
  for (auto val : vec) {
    if (val)
      ans += val * (val - 1) / 2;
  }
  cout << ans << endl;
}
