#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  int N = 64;
  vector<int> A(N, 1);

  // rep(i, N) cin >> A[i];
  ll ans = 0;
  for (int i = 0; i < N; ++i)
    if (A[i])
      ans += 1LL << i;
  cout << ans << endl;
}
