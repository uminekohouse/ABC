#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll N, M, D;
  cin >> N >> M >> D;
  vector<ll> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  ll ans = -1;
  rep(i, N) {
    ll left = A[i] - D, right = A[i] + D;
    int j = upper_bound(B.begin(), B.end(), right) - B.begin();
    if (j > 0) {
      j -= 1;
      if (left <= B[j])
        ans = max(ans, A[i] + B[j]);
    }
  }
  cout << ans << endl;
}
