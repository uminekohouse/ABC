#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  int ans = 0;
  rep(bit, 1 << N) {
    vector<int> vec(26, 0);
    int tmp = 0;
    rep(i, N) {
      if (bit & 1 << i) {
        for (auto c : S[i]) {
          vec[c - 'a']++;
        }
      }
    }
    rep(i, 26) if (vec[i] == K) tmp++;
    ans = max(tmp, ans);
  }
  cout << ans << endl;
}
