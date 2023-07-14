#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = 0;
  int cnt = 0;
  for (auto c : S) {
    if (c == 'o')
      cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  cnt = 0;
  reverse(S.begin(), S.end());
  for (auto c : S) {
    if (c == 'o')
      cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }
  if (!ans)
    cout << -1 << endl;
  else
    cout << ans << endl;
}
