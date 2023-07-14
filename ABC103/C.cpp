#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  ll a[N];
  rep(i, N) cin >> a[i];
  ll ans = 0;
  rep(i, N) ans += a[i] - 1;
  cout << ans << endl;
}
