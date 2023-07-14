#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  map<int, vector<ll>> mp;
  rep(i, N) {
    if (A[i] > 0)
      mp[1].push_back(A[i]);
    if (A[i] == 0)
      mp[0].push_back(A[i]);
    if (A[i] < 0)
      mp[-1].push_back(A[i]);
  }
  vector<ll> vec;
  if (mp[-1].size() * mp[1].size() >= K) {
    for (auto val1 : mp[1]) {
      for (auto val2 : mp[-1]) {
        vec.push_back(val1 * val2);
      }
    }
    sort(all(vec));
    cout << vec[K - 1] << endl;
    return 0;
  }
  K -= mp[-1].size() * mp[1].size();
  int O = mp[0].size() * (mp[1].size() + mp[-1].size()) +
          mp[0].size() * (mp[0].size() - 1) / 2;
  if (K <= O) {
    cout << 0 << endl;
    return 0;
  }
  K -= O;
  int L = mp[1].size();
  int M = mp[-1].size();
  for (int i = 0; i < L - 1; ++i) {
    for (int j = i + 1; j < L; ++j) {
      vec.push_back(mp[1][i] * mp[1][j]);
    }
  }
  for (int i = 0; i < M - 1; ++i) {
    for (int j = i + 1; j < M; ++j) {
      vec.push_back(mp[-1][i] * mp[-1][j]);
    }
  }
  sort(all(vec));
  cout << vec[K - 1] << endl;
}
