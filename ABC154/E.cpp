#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll N;
  int K;
  cin >> N >> K;
  int ans = 0;
  function<void(ll, int)> func = [&](ll now, int cnt) {
    if (now <= N && cnt == K)
      ans++;
    rep(i, 10) {
      int nex = now * 10 + i;
      if (nex > N || cnt > K)
        continue;
      if (!i)
        func(nex, cnt);
      else
        func(nex, cnt + 1);
    }
  };
  for (int i = 1; i <= 9; ++i)
    func(i, 1);
  cout << ans << endl;
}
