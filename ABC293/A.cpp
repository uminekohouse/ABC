#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = 10;
  string T = "UTPC";
  for (int i = 0; i < N - 3; ++i) {
    string U = S.substr(i, 4);
    int tmp = 0;
    for (int j = 0; j < 4; ++j)
      if (U[j] != T[j])
        tmp++;
    ans = min(ans, tmp);
  }
  cout << ans << endl;
}
