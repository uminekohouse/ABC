#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll N, K;
  cin >> N >> K;
  map<ll, set<ll>> mp;
  mp[0].insert(0);
  for (ll i = 0; i <= N; ++i) {
    for (int j = i + 1; j >= 1; --j) {
      for (auto val : mp[j - 1]) {
        ll tmp = (i + val) % (1000000007);
        mp[j].insert(tmp);
      }
    }
  }
  ll ans = 0;
  for (int i = K; i <= N + 1; ++i)
    ans += mp[i].size();
  cout << ans << endl;
}
