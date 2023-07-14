#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using Pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  map<int, int> mp;
  mp[A[0]] = 0;
  for (int i = 1; i < N; ++i) {
    mp[A[i]] += mp[A[i - 1]];
    if (i % 2 == 0)
      mp[A[i]] += A[i] - A[i - 1];
  }

  int Q;
  cin >> Q;
  rep(_, Q) {
    int l, r;
    cin >> l >> r;
    int l_index = upper_bound(A.begin(), A.end(), l) - A.begin() - 1;
    int r_index = upper_bound(A.begin(), A.end(), r) - A.begin() - 1;
    // cout << l_index << " " << r_index << endl;
    int ans = mp[A[r_index]] - mp[A[l_index]];
    if (l_index % 2 == 1)
      ans -= l - A[l_index];
    if (r_index % 2 == 1)
      ans += r - A[r_index];
    cout << ans << endl;
  }
}
