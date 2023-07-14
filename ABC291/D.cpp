#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  map<int, int> mp;
  rep(i, N) mp[A[i]]++;
  int ans = 0;
  for (auto v : mp) {
    int key = v.first;
    int val = v.second;
    for (int i = 1; i * i <= key; ++i) {
      if (key % i == 0) {
        if (i == 1)
          ans += mp[i] if else(i != key / i) ans +=
              val * mp[i] * mp[key / i] * 2;
        else
          ans += val * mp[i] * (mp[i] - 1) * 2;
      }
    }
  }
  cout << ans << endl;
}
