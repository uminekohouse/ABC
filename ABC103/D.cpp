#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

bool func(P a, P b) {
  if (a.second != b.second)
    return a.second < b.second;
  else
    return a.first < b.first;
}
int main() {
  int N, M;
  cin >> N >> M;
  vector<P> vec(M);
  rep(i, M) cin >> vec[i].first >> vec[i].second;
  sort(all(vec), func);
  int ans = 0;
  int l = 0, r = 0;
  for (P val : vec) {
    if (r <= val.first) {
      ans++;
      l = val.first;
      r = val.second;
    }
  }
  cout << ans << endl;
}
