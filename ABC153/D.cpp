#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll H;
  cin >> H;
  map<ll, ll> mp;
  mp[1] = 1;
  function<ll(ll)> func = [&](ll v) {
    if (mp.count(v))
      return mp[v];
    return mp[v] = func(v / 2) * 2 + 1;
  };
  func(H);
  cout << mp[H] << endl;
}
